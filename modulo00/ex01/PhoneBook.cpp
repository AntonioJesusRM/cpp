/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:16:43 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/02/28 18:42:30 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{}

PhoneBook::~PhoneBook()
{}

void PhoneBook::AddContact(void)
{
	static int	i = 0;

	this->Contacts[i % 8].Init(i % 8);
	i++; 
}

void PhoneBook::Search()
{
	std::string aux;
	int index = -1;
	int max = -1;
	if(!this->Contacts[0].IsEmpty())
		std::cout << "Index|First name|Last name| Nickname " << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if(!this->Contacts[i].IsEmpty())
		{
			this->Contacts[i].Info();
			max = i + 1;
		}
	}
	if (max != -1)
	{
		std::cin.ignore();
		while (index == -1)
		{
			std::cout << "Please enter the contact index: ";
			std::getline(std::cin, aux);
			std::istringstream(aux) >> index;
			if (!(index >= 1 && index <= max))
				index = -1;
		}
		this->Contacts[index - 1].AllInfo();
	}
	else
		std::cout << "No contacts found in the phonebook" << std::endl;
}
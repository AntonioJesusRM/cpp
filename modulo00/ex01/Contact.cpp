/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:25:39 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/02/28 18:25:24 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{}

void Contact::Init(int index)
{
	int	control;

	control = -1;
	std::cin.ignore();
	this->Index = index + 1;
	do
	{
		control++;
		if (control == 0)
			std::cout << "Name: ";
		else
			std::cout << "The name is empty, please enter the name: ";
  		std::getline (std::cin,this->FirstName);
	} while (this->FirstName.length() == 0);
	control = -1;
	do
	{
		control++;
		if (control == 0)
			std::cout << "Last name: ";
		else
			std::cout << "The last name is empty, please enter the last name: ";
  		std::getline (std::cin,this->LastName);
	} while (this->LastName.length() == 0);
	control = -1;
	do
	{
		control++;
		if (control == 0)
			std::cout << "Nickname: ";
		else
			std::cout << "The nickname is empty, please enter the nickname: ";
  		std::getline (std::cin,this->Nickname);
	} while (this->Nickname.length() == 0);
	control = -1;
	do
	{
		control++;
		if (control == 0)
			std::cout << "Phone number: ";
		else
			std::cout << "The phone number is empty, please enter the phone number: ";
  		std::getline (std::cin,this->PhoneNumber);
	} while (this->PhoneNumber.length() == 0);
	control = -1;
	do
	{
		control++;
		if (control == 0)
			std::cout << "Darkest secret: ";
		else
			std::cout << "The darkest secret is empty, please enter the darkest secret: ";
  		std::getline (std::cin,this->DarkestSecret);
	} while (this->DarkestSecret.length() == 0);
}

void Contact::Info(void)
{
	std::string name = this->FirstName;
	std::string lname = this->LastName;
	std::string nname = this->Nickname;
	if (name.length() > 10)
		name = name.substr(0,9) + '.';
	if (lname.length() > 10)
		lname = lname.substr(0,9) + '.';
	if (nname.length() > 10)
		nname = nname.substr(0,9) + '.';
	std::cout << std::right << std::setw(10) << this->Index << "|";
	std::cout << std::right << std::setw(10) << name << "|";
	std::cout << std::right << std::setw(10) << lname << "|";
	std::cout << std::right << std::setw(10) << nname;
	std::cout << std::endl;
}

int	Contact::IsEmpty(void)
{
	int empty = 1;
	if (!this->FirstName.empty())
		empty = 0;
	return (empty);
}

void Contact::AllInfo(void)
{
	std::cout << "First name: " << this->FirstName << std::endl;
	std::cout << "Last name: " << this->LastName << std::endl;
	std::cout << "Phone number: " << this->PhoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->DarkestSecret << std::endl;
}
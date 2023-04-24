/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:36:28 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/19 18:04:24 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-picklespecial-ketchup burger." << std::endl  << "I really do!" <<std::endl;
}
void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl  << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" <<std::endl;
}
void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl  << "I’ve been coming for years whereas you started working here since last month." <<std::endl;
}
void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." <<std::endl;
}
void Harl::complain( std::string level )
{
	std::string opciones[4] = {"debug", "info", "warning", "error"};
	t_func func[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for(int i = 0; i < 4; i++)
	{
		if (level == opciones[i])
		{
			(this->*func[i])();
			return ;
		}
	}
	 std::cerr << "El level que ha introducido no se encuentra." << std::endl;
}
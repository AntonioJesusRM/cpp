/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 08:39:17 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/10/10 09:22:30 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int	select(void)
{
	std::srand(std::time(0));
	int randomNumber = std::rand() % 3;
	std::cout << randomNumber << std::endl;

	return (randomNumber);
}

Base *generate(void)
{
	switch (select())
	{
	case 0:
		return (new A);
		break;
	case 1:
		return (new B);
		break;
	case 2:
		return (new C);
		break;
	}
	return 0;
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)a;
		return ;
	}
	catch(const std::exception& e){}
	try
	{
		B &b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		(void)b;
		return ;
	}
	catch(const std::exception& e){}
	try
	{
		C &c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		(void)c;
		return ;
	}
	catch(const std::exception& e){}
}

int main()
{
	Base *b = generate();

	std::cout << "Mediante el identificador \"Base *p\" b es de la clase: ";
	identify(b);
	std::cout << std::endl;

	std::cout << "Mediante el identificador \"Base &p\" b es de la clase: ";
	identify(*b);
	std::cout << std::endl;
}
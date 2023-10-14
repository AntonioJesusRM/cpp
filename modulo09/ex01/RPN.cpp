/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:54:53 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/10/14 09:06:03 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void){}

RPN::RPN(RPN &src)
{
	*this = src;
}

RPN::~RPN(){}

RPN &RPN::operator=(RPN &src)
{
	if (this != &src)
		this->numbers = src.numbers;
	return (*this);
}

RPN::RPN(std::string str)
{
	std::istringstream stream(str);
	std::string token;
	bool ctrl = true;
	double result;
	double aux;
	while (stream >> token && ctrl) {
		std::istringstream tokenStream(token);
		double n;
		bool moreArg = false;
        if (tokenStream >> n)
		{
			if (n < 10 && n >= 0)
            	this->numbers.push(n);
			else
			{
				std::cerr << "Error." << std::endl;
				ctrl = false;
				break;
			}
		}
		else
		{
			if (this->numbers.size() < 2) {
                std::cerr << "Error." << std::endl;
				ctrl = false;
				break;
			}
			else if (this->numbers.size() == 3) {
				aux = this->numbers.front();
            	this->numbers.pop();
				moreArg = true;
			}
			int firstNumber = this->numbers.front();
            this->numbers.pop();
            int secondNumber = this->numbers.front();
            this->numbers.pop();
			switch (token[0])
			{
			case '+':
				result = firstNumber + secondNumber;
				if (moreArg)
					this->numbers.push(aux);
				this->numbers.push(result);
				break;
			case '-':
				result = firstNumber - secondNumber;
				if (moreArg)
					this->numbers.push(aux);
				this->numbers.push(result);
				break;
			case '*':
				result = firstNumber * secondNumber;
				if (moreArg)
					this->numbers.push(aux);
				this->numbers.push(result);
				break;
			case '/':
				if (secondNumber != 0) {
					result = firstNumber / secondNumber;
					if (moreArg)
						this->numbers.push(aux);
					this->numbers.push(result);
				} else {
					std::cerr << "Error: div 0." << std::endl;
					ctrl = false;
				}
				break;
			default:
					std::cerr << "Error: operator." << std::endl;
					ctrl = false;
				break;
			}
		}
    }
	if (ctrl)
		std::cout << result << std::endl;
}
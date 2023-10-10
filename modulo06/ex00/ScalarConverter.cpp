/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:06:33 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/10/09 12:41:46 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter:: ScalarConverter(void)
{
}

ScalarConverter::ScalarConverter(ScalarConverter const & src)
{
    *this = src;
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter&  ScalarConverter::operator=(ScalarConverter const &src)
{
	if (this != &src)
		*this = src;
    return (*this);
}

void ScalarConverter::toChar(char val)
{
	std::cout << "char: '" << val << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(val) << std::endl;
	std::cout << "float: " << static_cast<float>(val) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(val) << std::endl;
}

void ScalarConverter::toInt(std::string param)
{
    long val = std::strtol(param.c_str(), NULL, 10);
	if (val < 0 || val > 127)
		std::cout << "char: impossible"<< std::endl;
	else if (!std::isprint(val))
		std::cout << "char: Non displayable"<< std::endl;
	else
		std::cout << "char: '" << static_cast<char>(val) << "'"<< std::endl;
	if (val >  std::numeric_limits<int>::max() || val < std::numeric_limits<int>::min())
		std::cout << "int: impossible"<< std::endl;
	else	
		std::cout << "int: " << static_cast<int>(val) << std::endl;
	std::cout << "float: " << static_cast<float>(val) << ".0f" << std::endl;
	std::cout << "float: " << static_cast<double>(val) << ".0" << std::endl;
}

void ScalarConverter::toFloat(std::string param, std::vector<int> imp)
{
	float val = std::atof(param.c_str());

	if (val < 0 || val > 127 || imp[0] == 1)
		std::cout << "char: impossible"<< std::endl;
	else if (!std::isprint(val))
		std::cout << "char: Non displayable"<< std::endl;
	else
		std::cout << "char: '" << static_cast<char>(val) << "'"<< std::endl;
	if (val >  std::numeric_limits<int>::max() || val < std::numeric_limits<int>::min() || imp[1] == 1)
		std::cout << "int: impossible"<< std::endl;
	else	
		std::cout << "int: " << static_cast<int>(val) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << val << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(val) << std::endl;
}

void ScalarConverter::toDouble(std::string param, std::vector<int> imp)
{
	double val = std::strtod(param.c_str(), NULL);

	if (val < 0 || val > 127 || imp[0] == 1)
		std::cout << "char: impossible"<< std::endl;
	else if (!std::isprint(val))
		std::cout << "char: Non displayable"<< std::endl;
	else
		std::cout << "char: '" << static_cast<char>(val) << "'"<< std::endl;
	if (val >  std::numeric_limits<int>::max() || val < std::numeric_limits<int>::min() || imp[1] == 1)
		std::cout << "int: impossible"<< std::endl;
	else	
		std::cout << "int: " << static_cast<int>(val) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(val) << "f" << std::endl;
	std::cout << "double: " << val << std::endl;
}

void ScalarConverter::convert(std::string param)
{
	std::string	type = "char";
	std::vector<int> imp;
	int	len = param.size();

	for (size_t i = 0; i < 4; ++i)
        imp.push_back(0);
	if (len == 1 && !std::isdigit(param[0]))
		toChar(param[0]);
	else if (len == 3 && param[0] == '\'' && param[2] == '\'')
		toChar(param[1]);
	else if (param == "-inff" || param == "+inff" || param == "nanf")
	{
		type = "float";
		imp[0] = 1;
		imp[1] = 1;
	}
	else if (param == "-inf" || param == "+inf" || param == "nan")
	{
		type = "double";
		imp[0] = 1;
		imp[1] = 1;
	}
	else if ((param.size() > 1 && std::atof(param.c_str()) == 0))
		type = "string";
	else
	{
		type = "int";
		for(int i = 0; i < len; i++)
		{
			if(param[i] == '.' && type == "int")
				type = "double";
			else if (param[i] == 'f' && (type == "int" || type == "double"))
				type = "float";
			else if (i != 0 && !std::isdigit(param[i]))
				type = "string";
		}
	}
	if (type == "string")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
	else if (type == "int")
		toInt(param);
	else if (type == "float")
		toFloat(param, imp);
	else if (type == "double")
		toDouble(param, imp);
}

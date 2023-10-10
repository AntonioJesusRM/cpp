/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:02:23 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/10/09 12:36:00 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include "iostream"
# include "vector"
# include "limits"
# include "iomanip"
# include "cstdlib"

class  ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const & src);
		~ScalarConverter();

		ScalarConverter& operator=(ScalarConverter const & src);

		static void toChar(char val);
		static void toInt(std::string param);
		static void toFloat(std::string param, std::vector<int> imp);
		static void toDouble(std::string param, std::vector<int> imp);

	public:
		static void convert(std::string param);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 09:03:16 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/10/20 08:54:43 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include "iostream"
# include "fstream"
# include "limits"
# include "sstream"
# include "string"
# include "algorithm"
# include "map"
# include "ctime"

class BitcoinExchange
{
private:
	std::map<std::string, double> dataCsv;
public:
	BitcoinExchange(void);
	BitcoinExchange(BitcoinExchange &src);
	~BitcoinExchange();

	BitcoinExchange &operator=(BitcoinExchange &src);

	BitcoinExchange(std::ifstream &fSrc, std::ifstream &fCsv);
	void SearchData(std::string key, double value);
	bool validatekey(std::string key);
};

#endif
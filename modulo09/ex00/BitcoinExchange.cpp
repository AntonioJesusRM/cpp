/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 09:03:14 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/10/20 09:09:40 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void){}

BitcoinExchange::BitcoinExchange(BitcoinExchange &src)
{
	*this = src;
}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange &src)
{
	if (this != &src)
		this->dataCsv = src.dataCsv;
	return (*this);
}

BitcoinExchange::BitcoinExchange(std::ifstream &fSrc, std::ifstream &fCsv)
{
	std::string lineSrc;
	std::string lineCsv;
	bool firstLine = true;
	while (std::getline(fCsv, lineCsv)) {
		if (firstLine) {
			firstLine = false;
			continue;
		}
		std::istringstream ss(lineCsv);
		std::string key;
		std::string value;

		if (std::getline(ss, key, ',')) {
			if (std::getline(ss, value)) {
				double valueD = std::atof(value.c_str());
				this->dataCsv.insert(std::pair<std::string, double>(key, valueD));
			}
		}
	}
	firstLine = true;
	while (std::getline(fSrc, lineSrc)) {
		if (firstLine) {
			firstLine = false;
			continue;
		}
		std::istringstream ss(lineSrc);
		std::string key;
		std::string mid;
		std::string value;

		if (std::getline(ss, key, ' ')) {
			if (std::getline(ss, mid, ' ')) {
				if (std::getline(ss, value)) {
					if (std::atof(value.c_str()) > 1000)
						std::cout << "Error: too large a number" << std::endl;
					else if (std::atof(value.c_str()) < 0)
						std::cout << "Error: not a positive number" << std::endl;
					else
					{
						if (this->validatekey(key))
							this->SearchData(key, std::atof(value.c_str()));
						else
							std::cout << "Error: bad input => " << key << std::endl;
					}
				}
				else
					std::cout << "Error: bad input => " << key << std::endl;
			}
			else
				std::cout << "Error: bad input => " << key << std::endl;
		}
	}
}

void BitcoinExchange::SearchData(std::string key, double value)
{
	std::time_t systemTime = std::time(NULL);
    std::tm* localTime = std::localtime(&systemTime);
    char systemDate[11];
    std::strftime(systemDate, sizeof(systemDate), "%Y-%m-%d", localTime);

	if (key >= systemDate)
		std::cout << "Error: date not found => " << key << std::endl;
	else
	{
		std::map<std::string, double>::iterator it = this->dataCsv.lower_bound(key);
		if (it != this->dataCsv.begin())
		{
			if (it->first == key)
				std::cout << key << " => " << value << " = " << it->second * value << std::endl;
			else
			{
				it--;
				std::cout << key << " => " << value << " = " << it->second * value << std::endl;
			}
		}
		else
			std::cout << "Error: date not found => " << key << std::endl;
	}
}

bool BitcoinExchange::validatekey(std::string key)
{
	bool ctrl = true;
	std::istringstream ss(key);
    int year, month, day;
    char dash1, dash2;

	if (key.length() != 10)
        return false;
	if (!(ss >> year >> dash1 >> month >> dash2 >> day))
        return false;
	if (dash1 != '-' || dash2 != '-' || ss.fail())
        return false;
	if (year < 1000 || month < 1 || month > 12 || day < 1 || day > 31)
        return false;
	return (ctrl);
}
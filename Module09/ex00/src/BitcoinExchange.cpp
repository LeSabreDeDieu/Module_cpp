/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:47:23 by sgabsi            #+#    #+#             */
/*   Updated: 2025/01/24 17:33:51 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::string strtrim(const std::string& str) {
    std::string::size_type start = 0;
    while (start < str.length() && std::isspace(str[start])) {
        ++start;
    }
    std::string::size_type end = str.length();
    while (end > start && std::isspace(str[end - 1])) {
        --end;
    }
    return str.substr(start, end - start);
}

bool isValidDate ( std::string &date ) {
	if (date.size() != 10 || date[4] != '-' || date[7] != '-') {
		return false;
	}
	int year = std::atoi(date.substr(0, 4).c_str());
	int month = std::atoi(date.substr(5, 2).c_str());
	int day = std::atoi(date.substr(8, 2).c_str());
	if (year < 1900 || month < 1 || month > 12 || day < 1 || day > 31) {
		return false;
	}
	std::tm tm = {};
	tm.tm_year = year - 1900;
	tm.tm_mon = month - 1;
	tm.tm_mday = day;
	tm.tm_isdst = -1;
	time_t time = mktime(&tm);
	return time != -1 && tm.tm_mday == day && tm.tm_mon == month - 1 && tm.tm_year == year - 1900;
}

std::map<std::string, float> getDataFile ( const char *filename ) {
	std::ifstream inFile(filename);
	if (!inFile.is_open()) {
		throw std::runtime_error("Error: Could not open historical data file.");
	}
	std::map<std::string, float> map;
	std::string line;
	size_t i = 2;
	std::getline(inFile, line);
	while (std::getline(inFile, line)){
		std::istringstream ss(line);
		std::string date;
		std::string priceStr;
		if (std::getline(ss, date, ',') && std::getline(ss, priceStr)) {
			date = strtrim(date);
			if (!isValidDate(date)) {
				std::cerr << RED << "[ERROR] Invalid date format on line " << i++ << "Expected : YYYY-MM-DD." << RESET << std::endl;
			}
			float price = std::atof(priceStr.c_str());
			map[date] = price;
		}
		++i;
	}
	inFile.close();
	return map;
}

void processOnInfile( const char *filename, const std::map<std::string, float> &data) {
	std::ifstream inFile(filename);
	if (!inFile.is_open()) {
		throw std::runtime_error("Error: Could not open historical data file.");
	}
	std::string line;
	size_t i = 2;
	std::getline(inFile, line);
	while (std::getline(inFile, line)) {
		std::istringstream ss(line);
		std::string date;
		std::string valueStr;
		if (std::getline(ss, date, '|') && std::getline(ss, valueStr)) {
			date = strtrim(date);
			if (!isValidDate(date)) {
				std::cerr << RED << "[ERROR] Invalid date format on line " << i++ << "Expected : YYYY-MM-DD." << RESET << std::endl;
				continue ;
			}
			float value = std::atof(valueStr.c_str());
			if (value < 0 || value > 1000) {
			std::cerr << RED 
					<< "[ERROR] Value: " << std::fixed << std::setprecision(0) << value
					<< " out of range on line " << i
					<< ". The value must be between 0 and 1000." 
					<< RESET << std::endl;
				continue ;
			}
			std::map<std::string, float>::const_iterator it = data.lower_bound(date);
			if (it == data.end() || it->first != date) {
				if (it != data.begin() && (it == data.end() || it->first > date)) {
					--it;
				}
			}
			if (it != data.end() && it->first <= date) {
				std::cout << "Date: " << date
                          << "\t|\tValue: " << value
                          << "\t|\tBitcoin Price: " << it->second
                          << "\t|\tResult: " << it->second * value << std::endl;
			} else {
				std::cerr << RED 
						<< "[ERROR] Error : No data for date " << date 
						<< " from line " << i++ 
						<< RESET << std::endl;
				continue ;
			}
		} else {
			std::cerr << RED 
					<< "[ERROR] Error: Invalid line format on line " << i++ 
					<< RESET << std::endl;
			continue ;
		}
		++i;
	}
	inFile.close();
}

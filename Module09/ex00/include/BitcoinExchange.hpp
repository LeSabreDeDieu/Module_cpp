/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:47:26 by sgabsi            #+#    #+#             */
/*   Updated: 2025/01/24 17:31:13 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <ctime>
#include <fstream>
#include <sstream>
#include <exception>
#include <cstdlib>
#include <iomanip>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"
#define PATHFILE "./data.csv"

bool isValidDate( std::string & );

std::map<std::string, float> getDataFile ( const char * );

void processOnInfile( const char *filename, const std::map<std::string, float> &data);

#endif //BITCOINEXCHANGE_HPP
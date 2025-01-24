/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 16:07:53 by sgabsi            #+#    #+#             */
/*   Updated: 2025/01/24 17:05:54 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "BitcoinExchange.hpp"

using std::cout;
using std::endl;
using std::string;
using std::map;

int usage() {
	std::cerr << "Usage : ./btc <input_file>" << std::endl;
	return 1;
}

int main(int argc, const char** argv) {
	if (argc != 2) { return usage(); }

	try
	{
		map<string, float> data = getDataFile(PATHFILE);
		processOnInfile(argv[1], data);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	return 0;
}
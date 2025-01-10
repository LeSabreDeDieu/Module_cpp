/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 11:01:51 by sgabsi            #+#    #+#             */
/*   Updated: 2025/01/10 15:35:33 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cstdlib>

void usage()
{
	std::cout << "Usage : ./convert [arg_to_convert]" << std::endl;
	exit(1);
}

int main(int argc, const char** argv) {
	if (argc < 2) {
		usage();
	}
	ScalarConverter::convert(std::string(argv[1]));
	return 0;
}
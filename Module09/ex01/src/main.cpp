/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 18:03:54 by sgabsi            #+#    #+#             */
/*   Updated: 2025/01/24 18:12:55 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

#include <iostream>

int usage() {
	std::cerr << "Usage : ./rpn \"valid expression\"" << std::endl;
	return 1;
}

int main(int argc, const char** argv) {
	if (argc != 2) { return usage(); }

	long res = doRPN(std::string(argv[1]));
	if (res != std::numeric_limits<int>::min())
		std::cout << res << std::endl;
	return 0;
}

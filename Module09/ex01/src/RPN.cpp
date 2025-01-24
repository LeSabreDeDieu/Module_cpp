/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:43:06 by sgabsi            #+#    #+#             */
/*   Updated: 2025/01/24 18:20:56 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool isValidChar ( char c ) {
	return std::isdigit(static_cast<unsigned char>(c)) || 
			c == '+' ||
			c == '-' ||
			c == '*' ||
			c == '/';
}

long doRPN( std::string str ) {
	if (str.empty()) {
		std::cerr << "ERROR" << std::endl;
		return std::numeric_limits<int>::min();
	}
	std::stack<int> tmp;
	int a, b;
	for (size_t i = 0; i < str.size(); ++i) {
		if (str[i] == ' ') continue;
		if (!isValidChar(str[i])) {
			std::cerr << "ERROR" << std::endl;
			return std::numeric_limits<int>::min();
		}
		if (std::isdigit(static_cast<unsigned char>(str[i]))) {
			tmp.push(str[i] - '0');
		} else {
			if (tmp.size() < 2) {
				std::cerr << "ERROR" << std::endl;
				return std::numeric_limits<int>::min();
			}
			b = tmp.top(); tmp.pop();
			a = tmp.top(); tmp.pop();
			switch (str[i]) {
				case '+': tmp.push(a + b); break;
				case '-': tmp.push(a - b); break;
				case '*': tmp.push(a * b); break;
				case '/': 
					if (b == 0) {
						std::cerr << "ERROR: Division by zero" << std::endl;
						return std::numeric_limits<int>::min();
					}
					tmp.push(a / b); 
					break;
				default:
					std::cerr << "ERROR" << std::endl;
					return std::numeric_limits<int>::min();
			}
		}
	}
	if (tmp.size() != 1) {
		std::cerr << "ERROR" << std::endl;
		return std::numeric_limits<int>::min();
	}
	return tmp.top();
}

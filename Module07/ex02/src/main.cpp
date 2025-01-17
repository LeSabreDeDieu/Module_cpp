/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 12:50:30 by sgabsi            #+#    #+#             */
/*   Updated: 2025/01/17 13:32:02 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	std::cout << "Test Array de int : " << std::endl;
	Array<int> arrayInt(5);
	for (unsigned int i = 0; i < arrayInt.size(); i++) {
		arrayInt[i] = i;
	}
	for (unsigned int i = 0; i < arrayInt.size(); i++) {
		std::cout << "arrayInt[" << i << "] => " << arrayInt[i] << std::endl;
	}

	std::cout << std::endl;

	std::cout << "Test Array de char : " << std::endl;
	Array<char> arrayChar(5);
	for (unsigned int i = 0; i < arrayChar.size(); i++) {
		arrayChar[i] = 'a' + i;
	}
	for (unsigned int i = 0; i < arrayChar.size(); i++) {
		std::cout << "arrayChar[" << i << "] => " << arrayChar[i] << std::endl;
	}

	std::cout << std::endl;

	std::cout << "Test Array de string : " << std::endl;
	Array<std::string> arrayStr(2);
	arrayStr[0] = "Hello";
	arrayStr[1] = "World";
	for (unsigned int i = 0; i < arrayStr.size(); i++) {
		std::cout << "arrayStr[" << i << "] => " << arrayStr[i] << std::endl;
	}

	std::cout << std::endl;

	std::cout << "Test Array \"out of range\" : " << std::endl;
	Array<int> arrayIntTest(5);
	try {
		arrayIntTest[10] = 5;
	}
	catch (std::exception &e) {
		std::cout << "Error : " << e.what() << std::endl;
	}

	return 0;
}

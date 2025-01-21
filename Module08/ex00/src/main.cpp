/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:11:24 by sgabsi            #+#    #+#             */
/*   Updated: 2025/01/21 17:47:33 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>

#include "easyfind.hpp"

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define RESET "\033[0m"

// Macro pour tester si la valeur existe dans le conteneur
#define TEST_EASYFIND_EXISTS(ContainerType, container, value, expected_value) { \
    try { \
        ContainerType::iterator it = easyfind(container, value); \
        if (*it == expected_value) { \
            std::cout << GREEN << "Test Passed: " << RESET << "Found " << *it << " (expected " << expected_value << ")\n"; \
        } else { \
            std::cout << RED << "Test Failed: "<< RESET << "Found " << *it << ", expected " << expected_value << "\n"; \
        } \
    } catch (const std::exception& e) { \
        std::cout << RED << "Test Failed: " << RESET << e.what() << "\n"; \
    } \
}

// Macro pour tester si la valeur n'existe pas dans le conteneur
#define TEST_EASYFIND_NOT_EXISTS(ContainerType, container, value) { \
    try { \
        ContainerType::iterator it = easyfind(container, value); \
        std::cout << RED << "Test Failed: " << RESET << "Found " << *it << " (but expected not to find it)\n"; \
    } catch (const std::exception& e) { \
        std::cout << GREEN << "Test Passed: " << RESET << e.what() << "\n"; \
    } \
}

// Fonction principale pour tester
int main() {
    // 1. Test avec std::vector
    {
        std::cout << "\nTest avec std::vector :\n\n";
        std::vector<int> vec;
		vec.push_back(10);
		vec.push_back(20);
		vec.push_back(30);
		vec.push_back(40);
		vec.push_back(50);

		std::cout << "elements in vec : \n[ ";
		for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it) {
			std::cout << *it << " ";
		}
		std::cout << "]" << std::endl;
		
		std::cout << std::endl;

        // Tester si la valeur 30 existe
		std::cout << "Test si la valeur 30 existe" << std::endl;
        TEST_EASYFIND_EXISTS(std::vector<int>, vec, 30, 30);

		std::cout << std::endl;

        // Tester si la valeur 100 n'existe pas
		std::cout << "Test si la valeur 100 n'existe pas" << std::endl;
        TEST_EASYFIND_NOT_EXISTS(std::vector<int>, vec, 100);
    }

    // 2. Test avec std::list
    {
        std::cout << "\nTest avec std::list :\n\n";
        std::list<int> lst;
		lst.push_back(5);
		lst.push_back(15);
		lst.push_back(25);
		lst.push_back(35);
		lst.push_back(45);

		std::cout << "elements in lst : \n[ ";
		for (std::list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it) {
			std::cout << *it << " ";
		}
		std::cout << "]" << std::endl;
		
		std::cout << std::endl;

        // Tester si la valeur 15 existe
		std::cout << "Test si la valeur 15 existe" << std::endl;
        TEST_EASYFIND_EXISTS(std::list<int>, lst, 15, 15);
		
		std::cout << std::endl;

        // Tester si la valeur 50 n'existe pas
		std::cout << "Test si la valeur 50 n'existe pas" << std::endl;
        TEST_EASYFIND_NOT_EXISTS(std::list<int>, lst, 50);
    }

    return 0;
}

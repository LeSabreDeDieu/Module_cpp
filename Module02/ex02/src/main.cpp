/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:52:19 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/06 08:30:39 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << "Affichage de a : \n" << a << std::endl;
	std::cout << "Affichage de b : \n" << b << std::endl;
	std::cout << std::endl;
	
	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	std::cout << "a * b = " << a * b << std::endl;
	std::cout << "a / b = " << a / b << std::endl;
	std::cout << "b / a = " << ((Fixed)b / a) << std::endl;
	std::cout << std::endl;

	std::cout << "a > b ?? " << ((a > b) ? "yes" : "no") << std::endl;
	std::cout << "a < b ?? " << ((a < b) ? "yes" : "no") << std::endl;
	std::cout << "a >= b ?? " << ((a >= b) ? "yes" : "no") << std::endl;
	std::cout << "a <= b ?? " << ((a <= b) ? "yes" : "no") << std::endl;
	std::cout << "a == b ?? " << ((a == b) ? "yes" : "no") << std::endl;
	std::cout << "a != b ?? " << ((a != b) ? "yes" : "no") << std::endl;
	std::cout << std::endl;

	std::cout << "Affichage de a : \n" << a << std::endl;
	std::cout << "Affichage de b : \n" << b << std::endl;
	std::cout << std::endl;

	std::cout << "Affichage de la pre-incremention de a : \n"<< ++a << std::endl;
	std::cout << "Affichage de a : \n" << a << std::endl << std::endl;
	std::cout << "Affichage de la post incremention de a : \n"<< a++ << std::endl;
	std::cout << "Affichage de a : \n" << a << std::endl;
	std::cout << std::endl;
	
	std::cout << "Affichage du max entre a et b : \n" << Fixed::max( a, b ) << std::endl;
	std::cout << "Affichage du min entre a et b : \n" << Fixed::min( a, b ) << std::endl;
	std::cout << std::endl;
	
	return 0;
}

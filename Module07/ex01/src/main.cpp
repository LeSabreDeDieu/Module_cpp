/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:00:16 by sgabsi            #+#    #+#             */
/*   Updated: 2025/01/16 15:08:11 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "iter.hpp"

template<typename T> void print( T &print) {
	std::cout << print << std::endl;
}

int main( void )
{
	std::cout << std::fixed << std::setprecision(1);
	int tabInt[] = {1, 2, 3, 4};
	float tabFloat[] = {1.0f, 2.0f, 3.0f, 4.0f};
	char tabChar[] = "Hello World";
	std::string tabStr[] = {"Hello", "World"};

	std::cout << "iter on int tab : " << std::endl;
	::iter(tabInt, 4, print);
	std::cout << "\niter on int float : " << std::endl;
	::iter(tabFloat, 4, print);
	std::cout << "\niter on char tab : " << std::endl;
	::iter(tabChar, 11, print);
	std::cout << "\niter on string tab : " << std::endl;
	::iter(tabStr, 2, print);

	return 0;
}



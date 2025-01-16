/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:35:35 by sgabsi            #+#    #+#             */
/*   Updated: 2025/01/16 14:52:10 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

int main( void )
{
	std::cout << "Test with int  : " << std::endl;

	int a = 0;
	int b = 1;

	std::cout << "a = " << a << "\nb = " << b << std::endl;
	::swap(a, b);
	std::cout << "a = " << a << "\nb = " << b << std::endl;
	std::cout << "min between a & b : " << ::min(a, b) << std::endl;
	std::cout << "max between a & b : " << ::max(a, b) << std::endl;

	std::cout << "\nTest with char  : " << std::endl;

	char c = 'a';
	char d = 'b';

	std::cout << "c = " << c << "\nd = " << d << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << "\nd = " << d << std::endl;
	std::cout << "min between c & d : " << ::min(c, d) << std::endl;
	std::cout << "max between c & d : " << ::max(c, d) << std::endl;

	std::cout << "\nTest with string  : " << std::endl;

	std::string e = "coucou";
	std::string f = "42";

	std::cout << "e = " << e << "\nf = " << f << std::endl;
	::swap(e, f);
	std::cout << "e = " << e << "\nf = " << f << std::endl;
	std::cout << "min between e & f : " << ::min(e, f) << std::endl;
	std::cout << "max between e & f : " << ::max(e, f) << std::endl;

	return 0;
}

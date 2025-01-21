/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:13:25 by sgabsi            #+#    #+#             */
/*   Updated: 2025/01/21 18:42:18 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Span.hpp"

using std::cout;
using std::endl;

#define RED "\033[31m"
#define GREEN "\033[32m"
#define RESET "\033[0m"

#define TEST(name, code) { \
	cout << name << endl; \
	code \
}

#define EXPECTED_EQ(a, b) { \
	if (a != b) { \
		cout << RED << "Error : " << RESET << a << " != " << b << endl; \
	} else { \
		cout << GREEN << "[OK]" << RESET << endl; \
	} \
}

int main( void )
{
	TEST("main de 42", {
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		EXPECTED_EQ(sp.shortestSpan(), 2);
		EXPECTED_EQ(sp.longestSpan(), 14);
	});

	TEST("100 nums", {
		Span sp = Span(100);
		std::vector<int> v(100);
		for (size_t i = 0; i < 100; i++)
		{
			v[i] = i;
		}
		sp.addNumber(v.begin(), v.end());
		EXPECTED_EQ(sp.shortestSpan(), 1);
		EXPECTED_EQ(sp.longestSpan(), 99);
	});

	TEST("10000 nums", {
		Span sp = Span(10000);
		std::vector<int> v(10000);
		for (size_t i = 0; i < 10000; i++)
		{
			v[i] = i;
		}
		sp.addNumber(v.begin(), v.end());
		EXPECTED_EQ(sp.shortestSpan(), 1);
		EXPECTED_EQ(sp.longestSpan(), 9999);
	});

	TEST("100000 nums", {
		Span sp = Span(100000);
		std::vector<int> v(100000);
		for (size_t i = 0; i < 100000; i++)
		{
			v[i] = i;
		}
		sp.addNumber(v.begin(), v.end());
		EXPECTED_EQ(sp.shortestSpan(), 1);
		EXPECTED_EQ(sp.longestSpan(), 99999);
	});

	TEST("short == long", {
		Span sp = Span(100);
		std::vector<int> v(100);
		for (size_t i = 0; i < 100; i++)
		{
			v[i] = 42;
		}
		sp.addNumber(v.begin(), v.end());
		EXPECTED_EQ(sp.shortestSpan(), 0);
		EXPECTED_EQ(sp.longestSpan(), 0);
	});
	return 0;
}

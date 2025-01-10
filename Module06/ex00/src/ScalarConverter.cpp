/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 10:56:52 by sgabsi            #+#    #+#             */
/*   Updated: 2025/01/10 16:15:03 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <limits>
#include <iomanip>

using std::cout;
using std::endl;
using std::string;

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& other) {
	*this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
	if(this != &other) {
		*this = other;
	}
	return *this;
}

ScalarConverter::~ScalarConverter() {}

bool isNum( const string str ) {
	size_t i = 0;
	while (str[i] && (std::isdigit(str[i]) || str[i] == '.' || str[i] == '+' || str[i] == '-'))
	{
		i++;
	}
	if (i != str.size())
	{
		return (i + 1 == str.size() && str[i] == 'f');
	}
	return true;
}

bool isNanInf( const string str ) {
	string tmp ( str );
	
	for (size_t i = 0; tmp[i]; i++)
	{
		tmp[i] = std::tolower(tmp[i]);
	}
	return (str == "nan"	|| str == "nanf"	||
            str == "-inf"	|| str == "-inff"	||
            str == "inf"	|| str == "inf"		||
		    str == "+inf"	|| str == "+inff");
}

void printChar ( long double nbr ) {
	cout << "char: ";
	if ( std::isinf(nbr) || std::isnan(nbr) )
	{
		cout << "impossible" <<endl;
		return ;
	}
	if ( nbr < 0 || nbr >= 127 )
	{
		cout << "Invalid format" << endl;
		return ;
	}
	else if ( nbr < 32 || nbr == 127 )
	{
		cout << "Non displayable" << endl;
	}
	else {
		cout << "'" << static_cast<char>(nbr) << "'" << endl;
	}
}

void printInt ( long double nbr ) {
	cout << "int: ";
	if ( std::isinf(nbr) || std::isnan(nbr) || 
		nbr < std::numeric_limits<int>::min() || nbr > std::numeric_limits<int>::max() )
	{
		cout << "impossible" <<endl;
		return ;
	}
	cout << static_cast<int>(nbr) << endl;
}

void printFloat ( long double nbr ) {
	cout << "float: ";
	if ( !(std::isinf(nbr) || !std::isnan(nbr)) && 
		(nbr < std::numeric_limits<float>::min() || nbr > std::numeric_limits<float>::max()) )
	{
		cout << "impossible" <<endl;
		return ;
	}
	cout << static_cast<float>(nbr) << "f" << endl;
}

void printDouble ( long double nbr ) {
	cout << "double: ";
	if ( !(std::isinf(nbr) || !std::isnan(nbr)) && 
		(nbr < std::numeric_limits<double>::min() || nbr > std::numeric_limits<double>::max()) )
	{
		cout << "impossible" <<endl;
		return ;
	}
	cout << static_cast<double>(nbr) << endl;
}

void ScalarConverter::convert ( const string toConvert ) {
	if (toConvert.size() > 1 && !(isNum(toConvert) || isNanInf(toConvert)))
	{
		cout << "Invalid Input ! " << endl;
	}
	else {
		long double d = 0;
		if (toConvert.size() == 1 && isascii(toConvert[0]))
		{
			d = (int)toConvert[0];
		}
		else {
			string tmp ( toConvert );
			for (size_t i = 0; tmp[i]; i++)
			{
				tmp[i] = std::tolower(tmp[i]);
			}
			d = (std::strtold(tmp.c_str(), NULL));
		}
		cout << std::fixed << std::setprecision(1);
		printChar(d);
		printInt(d);
		printFloat(d);
		printDouble(d);
	}
}

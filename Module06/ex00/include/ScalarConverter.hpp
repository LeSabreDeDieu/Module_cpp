/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 10:54:37 by sgabsi            #+#    #+#             */
/*   Updated: 2025/01/10 10:56:16 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>

class ScalarConverter {
private:
	// Constructors and destructors
	ScalarConverter();
	ScalarConverter(const ScalarConverter& other);
	~ScalarConverter();

	/* Operator overloads */
	ScalarConverter& operator=(const ScalarConverter& other);

public:
	/* Member functions */
	static void convert( const std::string );
};

#endif //SCALARCONVERTER_HPP
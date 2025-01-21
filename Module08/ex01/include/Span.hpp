/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:56:11 by sgabsi            #+#    #+#             */
/*   Updated: 2025/01/21 18:36:08 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span {
private:
	// Add private members
	unsigned int _n; // Capacite maximal
	std::vector<int> _v; // tableau qui stock les int
	Span();
public:
	// Constructors and destructors
	Span( unsigned int );
	Span(const Span& other);
	~Span();

	/* Operator overloads */
	Span& operator=(const Span& other);

	/* Member functions */
	void addNumber( int );
	void addNumber( std::vector<int>::iterator begin, std::vector<int>::iterator end );
	int shortestSpan( void ) const ;
	int longestSpan( void ) const ;
};

#endif //SPAN_HPP
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:03:48 by sgabsi            #+#    #+#             */
/*   Updated: 2025/01/21 18:42:00 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <limits>
#include <exception>

#include "Span.hpp"

Span::Span() :
	_n(0)
{}

Span::Span( unsigned int n ) :
	_n(n)
{}

Span::Span(const Span& other) :
	_n(other._n),
	_v(other._v)
{}

Span::~Span() {}

Span& Span::operator=(const Span& other) {
	if(this != &other) {
		_n = other._n;
		_v = other._v;
	}
	return *this;
}

void Span::addNumber( int nbr ) {
	if (_v.size() == _n) {
		throw std::out_of_range("Span is overloaded");
	}
	_v.push_back(nbr);
}

void Span::addNumber( std::vector<int>::iterator begin, std::vector<int>::iterator end ) {
	if ((_v.size() + std::distance(begin, end)) > _n)
	{
		throw std::out_of_range("Span is overloaded");
	}
	_v.insert(_v.end(), begin, end);
}

int Span::shortestSpan() const {
	if (_v.size() < 2) {
		throw std::logic_error("Not enough numbers to calculate span!");
	}

	std::vector<int> sorted = _v;
	std::sort(sorted.begin(), sorted.end());

	int shortest = std::numeric_limits<int>::max();
	for (size_t i = 1; i < sorted.size(); ++i) {
		shortest = std::min(shortest, sorted[i] - sorted[i - 1]);
	}

	return shortest;
}

 int Span::longestSpan() const {
	if (_v.size() < 2) {
		throw std::logic_error("Not enough numbers to calculate span!");
	}

	int min = *std::min_element(_v.begin(), _v.end());
	int max = *std::max_element(_v.begin(), _v.end());
	return max - min;
}

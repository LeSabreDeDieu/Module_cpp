/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:43:50 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/18 11:13:24 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include "Fixed.hpp"

using std::cout;
using std::endl;

Fixed::Fixed () :
	_entier(0)
{
	cout << "Default constructor called" << endl;
}

Fixed::Fixed ( const Fixed& nbr)
{
	cout << "Copy constructor called" << endl;
	_entier = nbr._entier; 
}

Fixed::Fixed ( const int nbr ) :
	_entier(nbr << _RAW_BITS)
{
	cout << "Int constructor called" << endl;
}

Fixed::Fixed ( const float fnbr )
{
	_entier = roundf(fnbr * (1 << _RAW_BITS));
	cout << "Float constructor called" << endl;
}

Fixed::~Fixed() {
	cout << "Destructor called" << endl;
}

int Fixed::getRawBits() const {
	return _entier; 
}
void Fixed::setRawBits( int const raw ) {
	this->_entier = raw;
}

float Fixed::toFloat() const {
	return (float)(_entier) / (1 << _RAW_BITS);
}

int Fixed::toInt() const {
	return _entier >> _RAW_BITS;
}

Fixed& Fixed::operator= ( const Fixed& nbr ) {
	cout << "Copy assignment operator called" << endl;
	if (this == &nbr)
		return *this;
	this->_entier = nbr.getRawBits();
	return *this;
}

std::ostream& operator<<( std::ostream &os, Fixed const &fixed ) {
	os << fixed.toFloat();
	return os;
}
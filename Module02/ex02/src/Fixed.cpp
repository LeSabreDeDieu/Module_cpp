/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:43:50 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/18 11:15:09 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include "Fixed.hpp"

using std::cout;
using std::endl;

Fixed::Fixed () : _entier(0){}

Fixed::Fixed ( const Fixed& nbr ){	_entier = nbr._entier; }

Fixed::Fixed ( const int nbr ) : _entier(nbr << _RAW_BITS) {}

Fixed::Fixed ( const float fnbr )
{
	_entier = roundf(fnbr * (1 << _RAW_BITS));
}

Fixed::~Fixed() {}

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

// Operateur d'affectation
Fixed& Fixed::operator= (const Fixed& nbr) {
	if (this == &nbr)
		return *this;
	this->_entier = nbr.getRawBits();
	return *this;
}

#pragma region "Operateur de comparaison"
bool Fixed::operator> ( const Fixed& nbr ) { return (this->_entier > nbr._entier); }

bool Fixed::operator< ( const Fixed& nbr ) { return (this->_entier < nbr._entier); }

bool Fixed::operator>= ( const Fixed& nbr ) { return (this->_entier >= nbr._entier); }

bool Fixed::operator<= ( const Fixed& nbr ) { return (this->_entier <= nbr._entier); }

bool Fixed::operator== ( const Fixed& nbr ) { return (this->_entier == nbr._entier); }

bool Fixed::operator!= ( const Fixed& nbr ) { return (this->_entier != nbr._entier); }
#pragma endregion

#pragma region "Operateur de calcul"
Fixed Fixed::operator+( const Fixed& nbr ){
	return this->getRawBits() + nbr.getRawBits();
}

Fixed Fixed::operator-( const Fixed& nbr ){
	return this->getRawBits() - nbr.getRawBits();
}

Fixed Fixed::operator*( const Fixed& nbr ){
	Fixed tmp;
	tmp.setRawBits((this->getRawBits() * nbr.getRawBits()) >> _RAW_BITS);
	return tmp;
}

Fixed Fixed::operator/( const Fixed& nbr ){
	if (nbr.getRawBits() == 0)
	{
		cout << "Error : division by 0" << endl;
		return nbr;
	}
	else
	{
		Fixed tmp;
		tmp.setRawBits((this->getRawBits() << _RAW_BITS) / nbr.getRawBits());
		return tmp;
	}
}
#pragma endregion

#pragma region "Operateur d'incrementation"
Fixed& Fixed::operator++( void ) {
	this->_entier++;
	return *this;
}

Fixed Fixed::operator++( int ) {
	Fixed tmp = *this;
	++(*this);
	return tmp;
}

Fixed& Fixed::operator--( void ) {
	this->_entier--;
	return *this;
}

Fixed Fixed::operator--( int ) {
	Fixed tmp = *this;
	--(*this);
	return tmp;
}
#pragma endregion

#pragma region "min & max"

const Fixed& Fixed::min( const Fixed &nb1, const Fixed &nb2 ) {
	if (nb1._entier < nb2._entier)
		return nb1;
	return nb2;
}

Fixed& Fixed::min( Fixed &nb1, Fixed &nb2 ) {
	if (nb1._entier < nb2._entier)
		return nb1;
	return nb2;
}

const Fixed& Fixed::max( const Fixed &nb1, const Fixed &nb2 ) {
	if (nb1.getRawBits() > nb2.getRawBits())
		return nb1;
	return nb2;
}

Fixed& Fixed::max( Fixed &nb1, Fixed &nb2 ) {
	if (nb1.getRawBits() > nb2.getRawBits())
		return nb1;
	return nb2;
}
#pragma endregion

std::ostream& operator<<( std::ostream &os, Fixed const &fixed ) {
	os << fixed.toFloat();
	return os;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:43:50 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/18 11:12:40 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

using std::cout;
using std::endl;

Fixed::Fixed () :
	_entier(0)
{
	cout << "Default constructor called" << endl;
}

Fixed::Fixed ( const Fixed& nbr) {
	cout << "Copy constructor called" << endl;
	*this = nbr;
}

Fixed::~Fixed() {
	cout << "Destructor called" << endl;
}

int Fixed::getRawBits() const {
	cout << "getRawBits member function called" << endl;
	return this->_entier; 
}
void Fixed::setRawBits( int const raw ) {
	cout << "setRawBits member function called" << endl;
	this->_entier = raw;
}

Fixed& Fixed::operator= (const Fixed& nbr) {
	cout << "Copy assignment operator called" << endl;
	if (this == &nbr)
		return *this;
	this->_entier = nbr.getRawBits();
	return *this;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:24:17 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/06 09:47:26 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() {};
Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y)) {}
Point::Point( const Point& p ) : _x(p._x), _y(p._y) {};

Point::~Point() {}

Fixed Point::getX() const { return _x; }

Fixed Point::getY() const { return _y; }

Fixed& Fixed::operator= (const Fixed& nbr) {
	if (this == &nbr)
		return *this;
	this->_entier = nbr.getRawBits();
	return *this;
}

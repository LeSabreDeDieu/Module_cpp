/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:24:17 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/11 08:27:20 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() {};
Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y)) {}
Point::Point( const Point& p ) : _x(p._x), _y(p._y) {};

Point::~Point() {}

Fixed Point::getX() const { return _x; }

Fixed Point::getY() const { return _y; }

Point& Point::operator= (const Point& point) {
	if (this != &point) {
		_x = point._x;
		_y = point._y;
	}
	return *this;
}

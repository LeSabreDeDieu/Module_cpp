/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:24:17 by sgabsi            #+#    #+#             */
/*   Updated: 2024/11/28 11:31:59 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

using Point::Point;

Point() {};
Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y)) {}
Point( const Point& p ) : _x(p._x), _y(p._y) {};

Point::~Point() {}

Point& operator=( const Point& p) {
	if (this != &p)
		return *this;
	this._x = p._x;
	this._y = p._y;
	return *this;
}


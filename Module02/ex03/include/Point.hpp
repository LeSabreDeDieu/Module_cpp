/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 10:49:50 by sgabsi            #+#    #+#             */
/*   Updated: 2024/11/28 11:22:12 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_HPP__
#define __POINT_HPP__

#include <iostream>
#include "Fixed.hpp"

class Point
{
private:
	Fixed _x;
	Fixed _y;
public:
	Point();
	Point( const float x, const float y );
	Point( const Point& );
	~Point();

	Point& operator=( const Point& );
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
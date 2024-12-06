/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:52:19 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/06 08:31:42 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Point.hpp"

int main( void ) {
	
	Point a(0, 0);
	Point b(0, 1);
	Point c(1, 0);

	Point p1(0.5, 0.5);
	Point p2(0, 0.5);
	Point p3(0.5, 0);
	Point p4(1, 0);
	Point p5(0.25, 0.25);
	
	bsp(a, b, c, p1) 	? std::cout << "p1 is inside the triangle abc" << std::endl 
							: std::cout << "p1 is outside the triangle abc" << std::endl;
	bsp(a, b, c, p2) 	? std::cout << "p2 is inside the triangle abc" << std::endl 
							: std::cout << "p2 is outside the triangle abc" << std::endl;
	bsp(a, b, c, p3) 	? std::cout << "p3 is inside the triangle abc" << std::endl 
							: std::cout << "p3 is outside the triangle abc" << std::endl;
	bsp(a, b, c, p4) 	? std::cout << "p3 is inside the triangle abc" << std::endl 
							: std::cout << "p3 is outside the triangle abc" << std::endl;
	bsp(a, b, c, p5) 	? std::cout << "p3 is inside the triangle abc" << std::endl 
							: std::cout << "p3 is outside the triangle abc" << std::endl;
	return 0;
}

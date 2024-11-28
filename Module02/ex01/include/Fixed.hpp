/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:37:10 by sgabsi            #+#    #+#             */
/*   Updated: 2024/11/28 10:33:53 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>

class Fixed
{
private:
	int	_entier;
	static const int _RAW_BITS = 8;
public:
	Fixed();
	Fixed( const int nbr );
	Fixed( const float fnbr );
	Fixed( const Fixed& );
	~Fixed();

	Fixed& operator=( const Fixed& nbr );

	int getRawBits ( void ) const ;
	void setRawBits ( int const raw );

	float	toFloat( void ) const;
	int		toInt ( void ) const;
};

std::ostream& operator<<(std::ostream &os, Fixed const &fixed) ;

#endif

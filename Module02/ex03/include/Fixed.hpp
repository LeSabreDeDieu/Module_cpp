/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:37:10 by sgabsi            #+#    #+#             */
/*   Updated: 2024/11/28 13:45:22 by sgabsi           ###   ########.fr       */
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

	int getRawBits ( void ) const;
	void setRawBits ( int const raw );

	float toFloat( void ) const;
	int toInt ( void ) const;
	
	Fixed& operator=( const Fixed& nbr );
	
	bool operator>( const Fixed& nbr );
	bool operator<( const Fixed& nbr );
	bool operator>=( const Fixed& nbr );
	bool operator<=( const Fixed& nbr );
	bool operator==( const Fixed& nbr );
	bool operator!=( const Fixed& nbr );
	
	Fixed operator+( const Fixed& nbr );
	Fixed operator-( const Fixed& nbr );
	Fixed operator*( const Fixed& nbr );
	Fixed operator/( const Fixed& nbr );

	Fixed& operator++( void );
	Fixed operator++( int );
	Fixed& operator--( void );
	Fixed operator--( int );

	static const Fixed& min(const Fixed &nb1, const Fixed &nb2);
	static const Fixed& max(const Fixed &nb1, const Fixed &nb2);

	static Fixed& min(Fixed& nb1, Fixed& nb2);
	static Fixed& max(Fixed& nb1, Fixed& nb2);
	
};

std::ostream& operator<<(std::ostream &os, Fixed const &fixed) ;

#endif
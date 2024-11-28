/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:37:10 by sgabsi            #+#    #+#             */
/*   Updated: 2024/07/05 12:43:09 by sgabsi           ###   ########.fr       */
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
	Fixed( const Fixed& );
	~Fixed();

	Fixed& operator=( const Fixed& nbr );

	int getRawBits ( void ) const ;
	void setRawBits ( int const raw );
};

#endif
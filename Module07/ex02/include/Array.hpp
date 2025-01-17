/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 12:11:54 by sgabsi            #+#    #+#             */
/*   Updated: 2025/01/17 13:02:36 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array {
private:
	// Add private members
	unsigned int	_size;
	T				*_array;
public:
	// Constructors and destructors
	Array();
	Array(unsigned int size);
	Array(const Array& other);
	~Array();

	/* Operator overloads */
	Array& operator=(const Array& other);
	T& operator[](unsigned int index);
	const T& operator[](unsigned int index) const;

	/* Member functions */
	unsigned int size( void );
};

#include "Array.tpp"

#endif //ARRAY_HPP
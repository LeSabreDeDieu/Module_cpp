/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 12:31:05 by sgabsi            #+#    #+#             */
/*   Updated: 2025/01/17 13:02:07 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"
#include <exception>

template<typename T>
Array<T>::Array() :
	_size(0),
	_array(NULL)
{}

template<typename T>
Array<T>::Array(unsigned int size) :
	_size(size),
	_array(new T[size]())
{}

template<typename T>
Array<T>::Array(const Array& other) :
	_size(other._size),
	_array(new T[other._size]())
{
	for (int i = 0; i < other._size; i++) {
		_array[i] = other._array[i];
	}
}

template<typename T>
Array<T>::~Array() {
	delete[] _array;
}


template <typename T>
Array<T> &Array<T>::operator=(const Array &other) {
	if (this != other) {
		delete[] _array;
		_size = other._size;
		_array = new T[other.size]();
		for (int i = 0; i < other._size; i++) {
			_array[i] = other._array[i];
		}
	}
	return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int index) {
	if (index > _size) {
		throw std::out_of_range("Index out of bounds");
	}
	return _array[index];
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const {
	if (index > _size) {
		throw std::out_of_range("Index out of bounds");
	}
	return _array[index];
}

template <typename T>
unsigned int Array<T>::size() {
	return _size;
}

#endif //ARRAY_TPP
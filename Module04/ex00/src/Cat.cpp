/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:21:42 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/13 10:55:50 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

using std::cout;
using std::endl;
using std::string;

Cat::Cat() : Animal("Cat") {
	cout << "Cat default constructor called" << endl;
}

Cat::Cat(const Cat & src) : Animal(src._type) {
	cout << "Cat copy constructor called" << endl;
}

Cat::~Cat() {
	cout << "Cat destructor called" << endl;
}

Cat & Cat::operator=( const Cat & src )
{
	if (this != &src) {
		this->_type = src._type;
	}
	return *this;
}

void Cat::makeSound() const {
	cout << "Meow Meow" << endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:27:00 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/13 10:55:58 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

using std::cout;
using std::endl;
using std::string;

Dog::Dog() : Animal("Dog") {
	cout << "Dog default constructor called" << endl;
}

Dog::Dog(const Dog & src) : Animal(src._type) {
	cout << "Dog copy contructor called" << endl;
}

Dog::~Dog() {
	cout << "Dog destructor called" << endl;
}

Dog & Dog::operator=( const Dog & src )
{
	if (this != &src) {
		this->_type = src._type;
	}
	return *this;
}

void Dog::makeSound() const {
	cout << "Woof Woof" << endl;
}

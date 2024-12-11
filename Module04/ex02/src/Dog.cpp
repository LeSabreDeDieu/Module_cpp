/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:27:00 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/11 08:54:27 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	cout << "Dog default constructor called" << endl;
	type = "Dog";
	_brain = new Brain();
}

Dog::~Dog() {
	cout << "Dog destructor called" << endl;
	delete _brain;
}

Dog & Dog::operator=( const Dog & src )
{
	if (this != &src) {
		this->type = src.type;
		if (_brain)
				delete _brain;
			this->_brain = new Brain(*src._brain);
	}
	return *this;
}

void Dog::makeSound() const { cout << "Woof Woof" << endl; }

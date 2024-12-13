/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:27:00 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/13 10:42:32 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

using std::cout;
using std::endl;
using std::string;

Dog::Dog() : Animal("Dog"), _brain(new Brain) {
	cout << "Dog default constructor called" << endl;
}

Dog::Dog(const Dog & src) : Animal(src._type), _brain(new Brain(*src._brain)){
	cout << "Dog copy constructor called" << endl;
}

Dog::~Dog() {
	cout << "Dog destructor called" << endl;
	delete _brain;
}

Dog & Dog::operator=( const Dog & src )
{
	if (this != &src) {
		this->_type = src._type;
		if (_brain) {
			delete _brain;
		}
		_brain = new Brain(*src._brain);
	}
	return *this;
}

void Dog::makeSound() const {
	cout << "Woof Woof" << endl;
}

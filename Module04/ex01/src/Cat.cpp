/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:21:42 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/13 10:34:48 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

using std::cout;
using std::endl;
using std::string;

Cat::Cat() : Animal("Cat"), _brain(new Brain) {
	cout << "Cat default constructor called" << endl;
}

Cat::Cat(const Cat & src) : Animal(src._type), _brain(new Brain(*src._brain)){
	cout << "Cat copy constructor called" << endl;
}

Cat::~Cat() {
	cout << "Cat destructor called" << endl;
	delete _brain;
}

Cat & Cat::operator=( const Cat & src )
{
	if (this != &src)
	{
		this->_type = src._type;
		if (_brain) {
			delete _brain;
		}
		_brain = new Brain(*src._brain);
	}
	return *this;
}

void Cat::makeSound() const {
	cout << "Meow Meow" << endl;
}

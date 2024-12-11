/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:21:42 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/11 08:54:24 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
	cout << "Cat default constructor called" << endl;
	type = "Cat";
	_brain = new Brain();
}

Cat::~Cat() {
	cout << "Cat destructor called" << endl;
	delete _brain;
}

Cat & Cat::operator=( const Cat & src )
{
	if (this != &src)
	{
		this->type = src.type;
		if (_brain)
			delete _brain;
		this->_brain = new Brain(*src._brain);
	}
	return *this;
}

void Cat::makeSound() const { cout << "Meow Meow" << endl; }

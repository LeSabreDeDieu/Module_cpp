/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:21:42 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/10 15:45:52 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
	cout << "Cat default constructor called" << endl;
	type = "Cat";
}

Cat::~Cat() { cout << "Cat destructor called" << endl; }

Cat & Cat::operator=( const Cat & src )
{
	if (this != &src)
		this->type = src.type;
	return *this;
}

void Cat::makeSound() const {
	cout << "Meow Meow" << endl;
}

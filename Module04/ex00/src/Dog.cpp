/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:27:00 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/11 08:11:30 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	cout << "Dog default constructor called" << endl;
	type = "Dog";
}

Dog::~Dog() { cout << "Dog destructor called" << endl; }

Dog & Dog::operator=( const Dog & src )
{
	if (this != &src)
		this->type = src.type;
	return *this;
}

void Dog::makeSound() const { cout << "Woof Woof" << endl; }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:13:02 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/11 08:10:50 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal () : type("Animal") { cout << "Animal default constructor called" << endl; }

Animal::~Animal () { cout << "Animal destructor called" << endl; }

Animal & Animal::operator=( const Animal & src )
{
	if (this != &src)
		this->type = src.type;
	return *this;
}

void Animal::makeSound () const { cout << "Animal make some sound" << endl; }

const string Animal::getType() const { return type; };

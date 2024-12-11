/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 08:04:00 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/11 08:11:09 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal () : type("Animal") { cout << "Wrong animal default constructor called" << endl; }

WrongAnimal::~WrongAnimal () { cout << "Wrong animal destructor called" << endl; }

WrongAnimal & WrongAnimal::operator=( const WrongAnimal & src )
{
	if (this != &src)
		this->type = src.type;
	return *this;
}

void WrongAnimal::makeSound () const { cout << "Wrong animal make some sound" << endl; }

const string WrongAnimal::getType() const { return type; };

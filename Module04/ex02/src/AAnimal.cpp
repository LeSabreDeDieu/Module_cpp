/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:13:02 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/13 10:57:43 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

using std::cout;
using std::endl;
using std::string;

AAnimal::AAnimal () : _type("Animal") {
	cout << "AAnimal default constructor called" << endl;
}

AAnimal::AAnimal (const string type) : _type(type) {
	cout << "AAnimal constructor called" << endl;
}

AAnimal::AAnimal (const AAnimal & src) : _type(src._type) {
	cout << "AAnimal copy constructor called" << endl;
}

AAnimal::~AAnimal () {
	cout << "AAnimal destructor called" << endl;
}

AAnimal & AAnimal::operator=( const AAnimal & src )
{
	if (this != &src) {
		this->_type = src._type;
	}
	return *this;
}

void AAnimal::makeSound () const {
	cout << "Animal make some sound" << endl;	
}

const string AAnimal::getType() const { return _type; };

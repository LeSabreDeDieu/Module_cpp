/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:13:02 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/13 10:56:37 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

using std::cout;
using std::endl;
using std::string;

Animal::Animal () : _type("Animal") {
	cout << "Animal default constructor called" << endl;
}

Animal::Animal (const string type) : _type(type) {
	cout << "Animal constructor called" << endl;
}

Animal::Animal (const Animal & src) : _type(src._type) {
	cout << "Animal copy constructor called" << endl;
}

Animal::~Animal () {
	cout << "Animal destructor called" << endl;
}

Animal & Animal::operator=( const Animal & src )
{
	if (this != &src) {
		this->_type = src._type;
	}
	return *this;
}

void Animal::makeSound () const {
	cout << "Animal make some sound" << endl;	
}

const string Animal::getType() const { return _type; };

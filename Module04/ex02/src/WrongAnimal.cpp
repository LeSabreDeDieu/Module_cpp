/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 08:04:00 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/13 10:58:25 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

using std::cout;
using std::endl;
using std::string;

WrongAnimal::WrongAnimal () : _type("Wrong Animal") {
	cout << "Wrong animal default constructor called" << endl;
}

WrongAnimal::WrongAnimal (const string type) : _type(type) {
	cout << "Wrong animal constructor called" << endl;
}

WrongAnimal::WrongAnimal (const WrongAnimal & src) : _type(src._type) {
	cout << "Wrong animal copy constructor called" << endl;
}

WrongAnimal::~WrongAnimal () {
	cout << "Wrong animal destructor called" << endl;
}

WrongAnimal & WrongAnimal::operator=( const WrongAnimal & src ) {
	if (this != &src) {
		_type = src._type;
	}
	return *this;
}

void WrongAnimal::makeSound () const {
	cout << "Wrong animal make some sound" << endl;
}

const string WrongAnimal::getType() const { return _type; };

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 08:09:42 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/13 10:57:05 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

using std::cout;
using std::endl;
using std::string;

WrongCat::WrongCat() : WrongAnimal("Wrong Cat") {
	cout << "Wrong cat default constructor called" << endl;
}

WrongCat::WrongCat (const WrongCat & src) : WrongAnimal(src._type) {
	cout << "Wrong cat copy constructor called" << endl;
}

WrongCat::~WrongCat() {
	cout << "Wrong cat destructor called" << endl;	
}

WrongCat & WrongCat::operator=( const WrongCat & src )
{
	if (this != &src) {
		_type = src._type;
	}
	return *this;
}

void WrongCat::makeSound() const {
	cout << "Meow Meow" << endl;
}
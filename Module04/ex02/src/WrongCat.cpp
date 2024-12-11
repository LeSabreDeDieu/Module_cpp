/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 08:09:42 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/11 08:16:46 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	cout << "Wrong cat default constructor called" << endl;
	type = "Wrong cat";
}

WrongCat::~WrongCat() { cout << "Wrong cat destructor called" << endl; }

WrongCat & WrongCat::operator=( const WrongCat & src )
{
	if (this != &src)
		this->type = src.type;
	return *this;
}

void WrongCat::makeSound() const { cout << "Meow Meow" << endl; }
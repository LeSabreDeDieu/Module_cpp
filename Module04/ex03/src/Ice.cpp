/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 09:18:34 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/13 11:02:33 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

using std::cout;
using std::endl;
using std::string;

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice & src) : AMateria(src._type) {
	*this = src;
}

Ice::~Ice() {}

Ice & Ice::operator=(const Ice & src){
	if (this != &src) {
		AMateria::operator=(src);
	}
	return *this;
}

Ice *Ice::clone() const {
	return new Ice(*this);
}

void Ice::use(ICharacter & target) {
	cout << "* shoots an ice bolt at " << target.getName() << " *" << endl;
}
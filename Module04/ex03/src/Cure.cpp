/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 08:44:26 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/12 16:00:09 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure( const Cure & src ) : AMateria(src._type) {
	*this = src;
}

Cure::~Cure() {}

Cure & Cure::operator=( const Cure & src ) {
	if (this != &src)
		AMateria::operator=(src);
	return *this;
}

Cure *Cure::clone() const {
	return new Cure(*this);
}

void Cure::use(ICharacter & target) {
	cout <<"* heals " << target.getName() << "’s wounds *" << endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 08:17:32 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/13 11:01:10 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

using std::cout;
using std::endl;
using std::string;

AMateria::AMateria() : _type("None") {}

AMateria::AMateria(string const & type) : _type(type) {}

AMateria::AMateria(const AMateria & src) : _type(src._type) {}

AMateria::~AMateria() {}

AMateria & AMateria::operator=( const AMateria & src ) {
	if (this != &src) {
		this->_type = src._type;
	}
	return *this;
}

const string & AMateria::getType() const { return _type; };

void AMateria::use(ICharacter& target) {
	cout << "Use called on " << target.getName() << endl;
}
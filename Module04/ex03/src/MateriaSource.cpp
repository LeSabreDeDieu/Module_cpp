/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:46:53 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/13 11:03:25 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

using std::cout;
using std::endl;
using std::string;

MateriaSource::MateriaSource() {
	for (int i = 0; i < MAX_INVENTORY; i++) {
		_inventory[i] = NULL;
	}
}

MateriaSource::MateriaSource( const MateriaSource & src ) {
	for (int i = 0; i < MAX_INVENTORY; i++) {
		delete _inventory[i];
		_inventory[i] = src._inventory[i];
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < MAX_INVENTORY; i++) {
		delete _inventory[i];
	}
}

MateriaSource & MateriaSource::operator=( const MateriaSource & src ) {
	if (this != &src) {
		for (int i = 0; i < MAX_INVENTORY; i++) {
			delete _inventory[i];
			_inventory[i] = src._inventory[i];
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (!_inventory[i]) {
			_inventory[i] = m;
			cout << "Materia " << m->getType() << " learnt at slot : " << i << endl; 
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (_inventory[i] && _inventory[i]->getType() == type) {
			cout << "Materia " << type << " created at slot : " << i << endl;
			return _inventory[i]->clone();
		}
	}
	return NULL;
}

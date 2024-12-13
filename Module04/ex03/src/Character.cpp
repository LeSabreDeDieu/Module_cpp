/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:11:41 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/13 11:01:49 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

using std::cout;
using std::endl;
using std::string;

Character::Character() : _name("Inconnu") {
	for (int i = 0; i < MAX_INVENTORY; i++) {
		_inventory[i] = NULL;
	}
}

Character::Character(string name) : _name(name) {
	for (int i = 0; i < MAX_INVENTORY; i++) {
		_inventory[i] = NULL;
	}
}

Character::Character(const Character & src) : _name(src._name) {
	for (int i = 0; i < MAX_INVENTORY; i++) {
		delete _inventory[i];
		_inventory[i] = src._inventory[i];
	}
}

Character::~Character() {
	for (int i = 0; i < MAX_INVENTORY; i++) {
		delete _inventory[i];
	}
}

string const & Character::getName() const { return _name; };
AMateria* const * Character::getInventory() const { return _inventory; };

Character & Character::operator=(const Character & src) {
	if (this != &src) {
		_name = src._name;
		for (int i = 0; i < MAX_INVENTORY; i++) {
			delete _inventory[i];
			_inventory[i] = src._inventory[i];
		}
	}
	return *this;
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (!_inventory[i]) {
			_inventory[i] = m;
			cout << "Materia " << m->getType() << " equiped at slot : " << i << endl; 
			return ;
		}
	}
}

void Character::unequip(int idx) {
	if (_inventory[idx]) {
		_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (_inventory[idx]) {
		_inventory[idx]->use(target);
	}
}

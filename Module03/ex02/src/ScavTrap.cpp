/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:52:09 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/10 09:39:52 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("ScavTrap", 100, 50, 20) {
	cout << "ScavTrap " << getName() << " created" << endl;
}

ScavTrap::ScavTrap( const string name ) : ClapTrap(name, 100, 50, 20) {
	cout << "ScavTrap " << getName() << " created" << endl;
}

ScavTrap::ScavTrap( const ScavTrap &src) : ClapTrap(src) {
	cout << "ScavTrap " << getName() << " created" << endl;
}

ScavTrap::~ScavTrap() {
	cout << "ScavTrap destructor called !" << endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & src) {
	if (this != &src) {
		setName(src.getName());
		setHitPoint(src.getHitPoint());
		setEnergyPoint(src.getEnergyPoint());
		setAttackDamage(src.getAttackDamage());
	}
	return *this;
}

void ScavTrap::attack( const string name) {
	cout << "ScavTrap " << getName() << " attack " << name << ", causing " << getAttackDamage() << " points of damage !" << endl;
}

void ScavTrap::guardGate() {
	cout << "ScavTrap " << getName() << " have enterred in Gate keeper mode !" << endl;
}

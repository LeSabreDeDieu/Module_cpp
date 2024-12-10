/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:02:41 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/10 14:54:35 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap(), _name("") {
	cout << "DiamondTrap Default constructor called" << endl;
		_hitPoint = FragTrap::_hitPoint;
		_energyPoint = ScavTrap::_energyPoint;
		_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap( string name ) : ClapTrap(name + "_ClapTrap"), ScavTrap(name + "_ScavTrap"), FragTrap(name + "_FragTrap"), _name(name) {
	cout << "DiamondTrap Default constructor called" << endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &src ) : ClapTrap(src), ScavTrap(src), FragTrap(src), _name(src._name)
{
	cout << "DiamondTrap Copy constructor called" << endl;
	_hitPoint = FragTrap::_hitPoint;
	_energyPoint = ScavTrap::_energyPoint;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::~DiamondTrap() {
	cout << "DiamondTrap Destructor called" << endl;
}

DiamondTrap &DiamondTrap::operator=( const DiamondTrap &src ) {
	cout << "DiamondTrap Assignation operator called" << endl;
	if (this != &src)
	{
		_name = src._name;
		_hitPoint = src._hitPoint;
		_energyPoint = src._energyPoint;
		_attackDamage = src._attackDamage;
	}
	return *this;
}

void DiamondTrap::whoAmI() {
	cout << "My name is " << _name << " and my ClapTrap name is " << ClapTrap::_name << endl;
}

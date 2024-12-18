/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:52:09 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/18 15:16:27 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

using std::cout;
using std::endl;
using std::string;

FragTrap::FragTrap() : ClapTrap("FragTrap", 100, 100, 30) {
	cout << "FragTrap " << getName() << " created" << endl;
}

FragTrap::FragTrap( const string name ) : ClapTrap(name, 100, 100, 30) {
	cout << "FragTrap " << getName() << " created" << endl;
}

FragTrap::FragTrap( const FragTrap &src) : ClapTrap(src) {
	cout << "FragTrap " << getName() << " created" << endl;
}

FragTrap::~FragTrap() {
	cout << "FragTrap destructor called !" << endl;
}

FragTrap & FragTrap::operator=(const FragTrap & src) {
	if (this != &src) {
		setName(src.getName());
		setHitPoint(src.getHitPoint());
		setEnergyPoint(src.getEnergyPoint());
		setAttackDamage(src.getAttackDamage());
	}
	return *this;
}

void FragTrap::highFivesGuys() {
	cout << "FragTrap " << getName() << " have give a high five !" << endl;
}

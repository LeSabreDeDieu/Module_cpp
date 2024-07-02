/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 12:02:28 by sgabsi            #+#    #+#             */
/*   Updated: 2024/06/27 12:47:31 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

using std::cout;
using std::endl;

HumanB::HumanB(string name) :
	_name(name)
{
	_weapon = NULL;
}

HumanB::~HumanB() {}

void HumanB::attack() const {
	cout << this->_name << " attacks with their " << this->_weapon->getType() << endl;
}

void HumanB::setWeapon(Weapon& weapon) {	this->_weapon = &weapon; }
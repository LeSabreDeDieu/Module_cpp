/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 12:02:28 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/18 11:10:13 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

using std::cout;
using std::endl;

HumanB::HumanB(std::string name) :
	_name(name)
{
	_weapon = NULL;
}

HumanB::~HumanB() {}

void HumanB::attack() const {
	if (this->_weapon == NULL)
	{
		cout << this->_name << " attack with their arms " << endl; 
		return ;
	}
	cout << this->_name << " attacks with their " << this->_weapon->getType() << endl;
}

void HumanB::setWeapon(Weapon& weapon) { this->_weapon = &weapon; }
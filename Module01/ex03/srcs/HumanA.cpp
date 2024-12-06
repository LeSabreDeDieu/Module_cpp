/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 12:02:26 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/04 15:44:50 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

using std::cout;
using std::endl;

HumanA::HumanA (string name, Weapon& weapon) : _name(name), _weapon(weapon) {}

HumanA::~HumanA() {}

void HumanA::attack() const {
	cout << this->_name << " attacks with their " << this->_weapon.getType() << endl;
}
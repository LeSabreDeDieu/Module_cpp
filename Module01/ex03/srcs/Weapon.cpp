/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:41:11 by sgabsi            #+#    #+#             */
/*   Updated: 2024/06/27 12:23:17 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(string type) :
	_type(type)
{}

Weapon::~Weapon() {}

const string Weapon::getType() const { return this->_type; }
void Weapon::setType(string type) { this->_type = type; }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:41:11 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/18 11:10:38 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string type) :
	_type(type)
{}

Weapon::~Weapon() {}

const std::string Weapon::getType() const { return this->_type; }
void Weapon::setType(std::string type) { this->_type = type; }

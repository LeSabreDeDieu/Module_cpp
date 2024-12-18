/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:00:59 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/18 11:07:13 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

using std::cout;
using std::endl;

Zombie::Zombie() {}

Zombie::Zombie (std::string nom) :
	_nom(nom)
{}

Zombie::~Zombie() {
	cout << this->_nom << endl;
}

void Zombie::announce() {
	cout << this->_nom << ": BraiiiiiiinnnzzzZ..." << endl;
}
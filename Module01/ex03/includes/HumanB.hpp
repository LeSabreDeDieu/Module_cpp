/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:55:58 by sgabsi            #+#    #+#             */
/*   Updated: 2024/06/27 12:44:21 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_HPP__
#define __HUMANB_HPP__

#include <iostream>
#include "Weapon.hpp"

using std::string;

class HumanB
{
private:
	/* data */
	string _name;
	Weapon* _weapon;
public:
	HumanB(string name);
	~HumanB();

	void attack() const;
	void setWeapon(Weapon& weapon);
};

#endif
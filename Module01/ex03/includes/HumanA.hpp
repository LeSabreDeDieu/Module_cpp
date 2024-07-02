/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:56:04 by sgabsi            #+#    #+#             */
/*   Updated: 2024/06/27 12:43:32 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_HPP__
#define __HUMANA_HPP__

#include <iostream>
#include "Weapon.hpp"

using std::string;

class HumanA
{
private:
	/* data */
	string _name;
	Weapon& _weapon;
public:
	HumanA(string name, Weapon& weapon);
	~HumanA();

	void attack() const;
};

#endif
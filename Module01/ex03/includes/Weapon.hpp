/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:38:34 by sgabsi            #+#    #+#             */
/*   Updated: 2024/06/27 12:23:04 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

#include <iostream>

using std::string;

class Weapon
{
private:
	/* data */
	string _type;
public:
	Weapon();
	Weapon(string type);
	~Weapon();

	const string getType() const;
	void setType(string type);
};


#endif
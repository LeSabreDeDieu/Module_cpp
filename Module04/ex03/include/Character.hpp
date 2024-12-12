/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:03:57 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/12 16:30:06 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

#define MAX_INVENTORY 4

using std::cout;
using std::endl;
using std::string;

class Character : public ICharacter {
private:
	string _name;
	AMateria *_inventory[MAX_INVENTORY];
public:
	Character();
	Character(string name);
	Character(const Character & src);
	~Character();

	Character & operator=( const Character & src );

	string const & getName() const;
	AMateria* const * getInventory() const;

	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};


#endif
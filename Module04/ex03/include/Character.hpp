/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:03:57 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/13 10:59:34 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

#define MAX_INVENTORY 4

class Character : public ICharacter {
private:
	std::string _name;
	AMateria *_inventory[MAX_INVENTORY];
public:
	Character();
	Character(std::string name);
	Character(const Character & src);
	~Character();

	Character & operator=( const Character & src );

	std::string const & getName() const;
	AMateria* const * getInventory() const;

	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};


#endif
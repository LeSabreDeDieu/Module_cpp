/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:30:49 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/13 11:03:39 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

void testMateriaSource() {
	std::cout << "Testing MateriaSource..." << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	AMateria* ice = src->createMateria("ice");
	AMateria* cure = src->createMateria("cure");

	std::cout << "Created Materia: " << (ice ? "Ice" : "None") << std::endl;
	std::cout << "Created Materia: " << (cure ? "Cure" : "None") << std::endl;

	delete ice;
	delete cure;
	delete src;
}

void testCharacter() {
	std::cout << "Testing Character..." << std::endl;
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");

	AMateria* ice = new Ice();
	AMateria* cure = new Cure();

	me->equip(ice);
	me->equip(cure);

	std::cout << "Using Materia on Bob..." << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
}

void testEquipUnequip() {
	std::cout << "Testing Equip and Unequip..." << std::endl;
	ICharacter* me = new Character("me");

	AMateria* ice = new Ice();
	AMateria* cure = new Cure();

	me->equip(ice);
	me->equip(cure);

	std::cout << "Equipped Materia: Ice and Cure" << std::endl;

	me->unequip(0);
	me->unequip(1);

	std::cout << "Unequipped Materia: Ice and Cure" << std::endl;

	for (size_t i = 0; i < MAX_INVENTORY; i++)
	{
		if (me->getInventory()[i])
			cout << "Materia : " << me->getInventory()[i]->getType() << endl;
	}

	delete ice;
	delete cure;
	delete me;
}

int main() {
	testMateriaSource();
	cout << endl;
	testCharacter();
	cout << endl;
	testEquipUnequip();

	return 0;
}
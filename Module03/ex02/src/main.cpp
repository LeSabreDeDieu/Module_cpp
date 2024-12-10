/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:30:37 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/10 13:52:56 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
	ClapTrap ClapTrap1 = ClapTrap("Jean");
	ClapTrap ClapTrap2 = ClapTrap("Paul");

	ScavTrap ScavTrap1 = ScavTrap("Remy");
	ScavTrap ScavTrap2 = ScavTrap("Alexis");

	FragTrap FragTrap1 = FragTrap("Martin");
	FragTrap FragTrap2 = FragTrap("Francois");

	ClapTrap1.setAttackDamage(1);
	ClapTrap2.setAttackDamage(1);

	ClapTrap1.setHitPoint(11);
	ClapTrap2.setHitPoint(2);

	ScavTrap2.setEnergyPoint(1);

	ScavTrap1.setAttackDamage(1);
	ScavTrap2.setAttackDamage(1);

	ScavTrap1.setHitPoint(11);
	ScavTrap2.setHitPoint(2);

	ScavTrap2.setEnergyPoint(1);

	cout << endl;
	
	// ------------------------------ Begin Tests ---------------------------------- //
	cout << "Test ClapTrap\n" << endl;
	
	ClapTrap1.attack(ClapTrap2.getName());
	ClapTrap2.takeDamage(ClapTrap1.getAttackDamage());

	cout << endl;

	ClapTrap2.attack(ClapTrap1.getName());
	ClapTrap1.takeDamage(ClapTrap2.getAttackDamage());

	cout << endl;

	ClapTrap2.setHitPoint(1);

	ClapTrap1.beRepaired(1);
	ClapTrap1.attack(ClapTrap2.getName());
	ClapTrap2.takeDamage(ClapTrap1.getAttackDamage());

	cout << endl;

	ClapTrap2.attack(ClapTrap1.getName());
	ClapTrap2.beRepaired(1);

	ClapTrap1.attack(ClapTrap2.getName());
	ClapTrap2.takeDamage(ClapTrap1.getAttackDamage());

	cout << endl;

	cout << "Test ScavTrap\n" << endl;

	ScavTrap1.attack(ScavTrap2.getName());
	ScavTrap2.takeDamage(ScavTrap1.getAttackDamage());

	cout << endl;

	ScavTrap2.attack(ScavTrap1.getName());
	ScavTrap1.takeDamage(ScavTrap2.getAttackDamage());

	cout << endl;

	ScavTrap2.setHitPoint(1);

	ScavTrap1.beRepaired(1);
	ScavTrap1.attack(ScavTrap2.getName());
	ScavTrap2.takeDamage(ScavTrap1.getAttackDamage());

	cout << endl;

	ScavTrap2.attack(ScavTrap1.getName());
	ScavTrap2.beRepaired(1);

	ScavTrap1.attack(ScavTrap2.getName());
	ScavTrap2.takeDamage(ScavTrap1.getAttackDamage());

	ScavTrap1.guardGate();

	cout << endl;

	cout << "Test FragTrap\n" << endl;

	FragTrap1.attack(FragTrap2.getName());
	FragTrap2.takeDamage(FragTrap1.getAttackDamage());

	cout << endl;

	FragTrap2.attack(FragTrap1.getName());
	FragTrap1.takeDamage(FragTrap2.getAttackDamage());

	cout << endl;

	FragTrap2.setHitPoint(1);

	FragTrap1.beRepaired(1);
	FragTrap1.attack(FragTrap2.getName());
	FragTrap2.takeDamage(FragTrap1.getAttackDamage());

	cout << endl;

	FragTrap2.attack(FragTrap1.getName());
	FragTrap2.beRepaired(1);

	FragTrap1.attack(FragTrap2.getName());
	FragTrap2.takeDamage(FragTrap1.getAttackDamage());

	FragTrap1.highFivesGuys();

	cout << endl;
	// ------------------------------- End Tests ----------------------------------- //

	return 0;
}

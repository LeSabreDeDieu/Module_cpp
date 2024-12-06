/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:30:37 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/04 09:37:41 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap Jean_Mich = ClapTrap("Jean-Michel");
	ClapTrap Jean_Paul = ClapTrap("Jean-Paul");

	Jean_Mich.setAttackDamage(1);
	Jean_Paul.setAttackDamage(1);

	Jean_Mich.setHitPoint(11);
	Jean_Paul.setHitPoint(2);

	Jean_Paul.setEnergyPoint(1);

	cout << endl;
	
	// ------------------------------ Begin Tests ---------------------------------- //
	Jean_Mich.attack(Jean_Paul.getName());
	Jean_Paul.takeDamage(Jean_Mich.getAttackDamage());

	cout << endl;

	Jean_Paul.attack(Jean_Mich.getName());
	Jean_Mich.takeDamage(Jean_Paul.getAttackDamage());

	cout << endl;

	Jean_Paul.setHitPoint(1);

	Jean_Mich.beRepaired(1);
	Jean_Mich.attack(Jean_Paul.getName());
	Jean_Paul.takeDamage(Jean_Mich.getAttackDamage());

	cout << endl;

	Jean_Paul.attack(Jean_Mich.getName());
	Jean_Paul.beRepaired(1);

	Jean_Mich.attack(Jean_Paul.getName());
	Jean_Paul.takeDamage(Jean_Mich.getAttackDamage());

	cout << endl;
	// ------------------------------- End Tests ----------------------------------- //

	return 0;
}

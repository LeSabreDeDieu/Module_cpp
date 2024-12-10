/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:30:37 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/10 15:05:22 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main( void )
{
	cout << "Constructors section : " << endl;

	DiamondTrap diamondTrap("DiamondTrap");

	cout << endl << "Battle mode" << endl << endl;
	diamondTrap.attack("DiamondTrap");
	diamondTrap.takeDamage(10);

	diamondTrap.guardGate();
	diamondTrap.highFivesGuys();

	diamondTrap.whoAmI();
	cout << endl << "end battle trap" << endl << endl;
	cout << "Destructors section : " << endl;
	return 0;
}

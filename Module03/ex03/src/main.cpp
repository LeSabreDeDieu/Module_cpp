/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:30:37 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/18 15:16:38 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

using std::cout;
using std::endl;
using std::string;

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

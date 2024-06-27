/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:00:52 by sgabsi            #+#    #+#             */
/*   Updated: 2024/06/27 11:00:53 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <stdlib.h>

int main()
{
	const int NB_ZOMBIE = 10;
	Zombie *horde = zombieHorde(NB_ZOMBIE, "zombie");

	for (int i = 0; i < NB_ZOMBIE; i++)
		horde[i].announce();
	
	delete[] horde;
	return 0;
}

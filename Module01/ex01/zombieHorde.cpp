/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:00:57 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/18 11:07:45 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	if (N < 0)
		return NULL;
	Zombie *horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		horde[i] = Zombie(name);
		
	return horde;
}
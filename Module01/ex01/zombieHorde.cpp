/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:00:57 by sgabsi            #+#    #+#             */
/*   Updated: 2024/06/27 11:00:58 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, string name) {
	Zombie *horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		horde[i] = Zombie(name);
		
	return horde;
}
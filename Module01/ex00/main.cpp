/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:44:24 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/18 11:06:57 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ) {
	Zombie *zombie = newZombie("Foo");
	zombie->announce();
	delete(zombie);

	randomChump("Bar");

	Zombie anotherZombie = Zombie("FooBar");
	anotherZombie.announce();
	return 0;
}

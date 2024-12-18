/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:04:47 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/18 11:05:34 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Zombie_HPP
#define Zombie_HPP

#include <iostream>
#include <string>

class Zombie {
private:
	std::string _nom;
public:
	void announce( void );
	Zombie( std::string name );
	~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif // Zombie_HPP
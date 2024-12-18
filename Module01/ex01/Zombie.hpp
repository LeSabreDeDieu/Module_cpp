/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:07:22 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/18 11:07:35 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Zombie_HPP__
#define __Zombie_HPP__

#include <iostream>
#include <string>

class Zombie
{
private:
	/* data */
	std::string _nom;
public:
	void announce( void );
	Zombie();
	Zombie(std::string name);
	~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif // __Zombie_HPP__
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:06:59 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/10 14:47:20 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP
#define __CLAPTRAP_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class ClapTrap
{
protected :
	string _name;
	int	_hitPoint;
	int _energyPoint;
	int _attackDamage;
public:
	ClapTrap(string name = "none", int hitPoint = 10, int energyPoint = 10, int attackDamage = 0);
	ClapTrap( const ClapTrap &src);
	~ClapTrap();

	ClapTrap & operator=(const ClapTrap & src);
	
	string getName( void ) const;
	int getHitPoint( void ) const;
	int getEnergyPoint( void ) const;
	int getAttackDamage( void ) const;

	void setName( string name );
	void setHitPoint( int hitPoint );
	void setEnergyPoint( int energyPoint );
	void setAttackDamage( int attackDamage );

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
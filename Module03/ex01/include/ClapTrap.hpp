/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:06:59 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/18 11:55:50 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
private:
	std::string _name;
	int	_hitPoint;
	int _energyPoint;
	int _attackDamage;
public:
	ClapTrap();
	ClapTrap( std::string name, int hitPoint, int energyPoint, int attackDamage );
	ClapTrap( const ClapTrap &src);
	~ClapTrap();

	ClapTrap & operator=(const ClapTrap & src);
	
	std::string getName( void ) const;
	int getHitPoint( void ) const;
	int getEnergyPoint( void ) const;
	int getAttackDamage( void ) const;

	void setName( std::string name );
	void setHitPoint( int hitPoint );
	void setEnergyPoint( int energyPoint );
	void setAttackDamage( int attackDamage );

	void attack( const std::string& target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
};

#endif
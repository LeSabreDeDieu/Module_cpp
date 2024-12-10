/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:15:49 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/04 09:39:19 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap(string name, int hitPoint, int energyPoint, int attackDamage) :
	_name(name),
	_hitPoint(hitPoint),
	_energyPoint(energyPoint),
	_attackDamage(attackDamage) { cout << "ClapTrap " << _name << " created" << endl; }

ClapTrap::ClapTrap( const ClapTrap &src) :
	_name(src._name),
	_hitPoint(src._hitPoint),
	_energyPoint(src._energyPoint),
	_attackDamage(src._attackDamage) { cout << "ClapTrap " << _name << " created" << endl; }

ClapTrap::~ClapTrap() { cout << "ClapTrap destructor called !" << endl; }

string ClapTrap::getName( void ) const { return _name; };
int ClapTrap::getHitPoint( void ) const { return _hitPoint; };
int ClapTrap::getEnergyPoint( void ) const { return _energyPoint; };
int ClapTrap::getAttackDamage( void ) const { return _attackDamage; };

void ClapTrap::setName( string name ) { _name = name; };
void ClapTrap::setHitPoint( int hitPoint ) { _hitPoint = hitPoint; };
void ClapTrap::setEnergyPoint( int energyPoint ) { _energyPoint = energyPoint; };
void ClapTrap::setAttackDamage( int attackDamage ) { _attackDamage = attackDamage; } ;

ClapTrap & ClapTrap::operator=(const ClapTrap & src) {
	if (this != &src) {
		_name = src._name;
		_hitPoint = src._hitPoint;
		_energyPoint = src._energyPoint;
		_attackDamage = src._attackDamage;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target) {

	if (_hitPoint == 0)
	{
		cout	<< "ClapTrap " << _name << " is dead and can't attack !" << endl;
		return ;
	}
	if (_energyPoint == 0)
	{
		cout	<< "ClapTrap " << _name << " doesn't have enough energy to attack !" << endl;
		return ;
	}
	--_energyPoint;
	cout		<< "ClapTrap " << _name
				<< " attacks " << target 
				<< ", causing " << _attackDamage 
				<< " points of damage! " << endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoint == 0)
	{
		cout << "ClapTrap " << _name << " is already dead !" << endl;
		return ;
	}
	_hitPoint = ((unsigned int) _hitPoint > amount) ? _hitPoint - amount : 0;
	cout << "ClapTrap " << _name << " took " << amount << " Damage !" << endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_hitPoint == 0)
	{
		cout << "ClapTrap " << _name << " is dead and can't repair itself !" << endl;
		return ;
	}
	if (_energyPoint == 0)
	{
		cout << "ClapTrap " << _name << " doesn't have enough energy to repair itself !" << endl;
		return ;
	}
	_hitPoint += amount;
	_energyPoint--;
	cout << "ClapTrap " << _name << " has been repaired by " << amount << " points !" << endl;
}

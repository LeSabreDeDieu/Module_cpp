/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:52:12 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/10 13:57:16 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_HPP
#define __SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

using std::cout;
using std::endl;
using std::string;

class ScavTrap : public ClapTrap {
private:
	/* data */
public:
	ScavTrap();
	ScavTrap( const string name );
	ScavTrap( const ScavTrap &src );
	~ScavTrap();

	ScavTrap & operator=( const ScavTrap & src );

	void attack( const string name);

	void guardGate( void );
};

#endif //__SCAVTRAP_HPP
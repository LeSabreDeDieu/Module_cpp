/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:52:12 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/18 11:56:13 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap( const std::string name );
	ScavTrap( const ScavTrap &src );
	~ScavTrap();

	ScavTrap & operator=(const ScavTrap & src);

	void attack( const std::string name);

	void guardGate();
};

#endif //SCAVTRAP_HPP
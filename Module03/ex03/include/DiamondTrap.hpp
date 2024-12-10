/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:00:59 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/10 14:12:31 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

using std::cout;
using std::endl;
using std::string;

class DiamondTrap : public ScavTrap, public FragTrap {
private:
	string _name;
public:
	DiamondTrap();
	DiamondTrap( string name );
	DiamondTrap( const DiamondTrap &src );
	~DiamondTrap();

	DiamondTrap &operator=( const DiamondTrap &copy );
	
	void whoAmI();
};

#endif // DIAMONDTRAP_HPP
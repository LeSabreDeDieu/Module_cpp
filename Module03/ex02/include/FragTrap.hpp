/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:42:46 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/18 15:03:53 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap();
	FragTrap( const std::string name );
	FragTrap( const FragTrap &src );
	~FragTrap();

	FragTrap & operator=( const FragTrap & src );

	void attack( const std::string name );

	void highFivesGuys( void );
};

#endif //FRAGTRAP_HPP

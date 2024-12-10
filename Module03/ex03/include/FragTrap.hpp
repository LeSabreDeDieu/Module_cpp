/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:42:46 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/10 14:59:39 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP
#define __FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

using std::cout;
using std::endl;
using std::string;

class FragTrap : public virtual ClapTrap {
private:
	/* data */
public:
	FragTrap();
	FragTrap( const string name );
	FragTrap( const FragTrap &src );
	~FragTrap();

	FragTrap & operator=( const FragTrap & src );

	void highFivesGuys( void );
};

#endif //__FRAGTRAP_HPP

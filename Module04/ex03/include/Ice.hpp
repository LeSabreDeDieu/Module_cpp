/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 08:20:54 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/12 08:42:55 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

using std::cout;
using std::endl;
using std::string;

class Ice : public AMateria {
public:
	Ice();
	Ice( const Ice & src );
	~Ice();

	Ice & operator=( const Ice & src );

	Ice* clone() const;
	void use(ICharacter & target);
};

#endif //ICE_HPP
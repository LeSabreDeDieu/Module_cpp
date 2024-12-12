/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 08:20:54 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/12 16:11:27 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

using std::cout;
using std::endl;
using std::string;

class Cure : public AMateria {
public:
	Cure();
	Cure( const Cure & src);
	~Cure();

	Cure & operator=( const Cure & src );

	Cure* clone() const;
	void use(ICharacter & target);
};

#endif //CURE_HPP
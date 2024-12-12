/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:38:21 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/12 16:05:01 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

#define MAX_INVENTORY 4

class MateriaSource : public IMateriaSource {
private:
	AMateria *_inventory[MAX_INVENTORY];
public :
	MateriaSource();
	MateriaSource( const MateriaSource & src);
	~MateriaSource();

	MateriaSource & operator=( const MateriaSource & src );

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif
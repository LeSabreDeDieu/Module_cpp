/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:10:37 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/13 10:46:19 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP
# define __ANIMAL_HPP

# define GREEN "\033[32m"
# define RED "\033[31m"
# define RESET "\033[0m"

#include <iostream>

class Animal {
protected:
	std::string _type;
public:
	Animal();
	Animal(const std::string type);
	Animal(const Animal & src);
	virtual ~Animal();

	Animal & operator=(const Animal & src);

	const std::string getType() const;
	virtual void makeSound( void ) const;
};


#endif //__ANIMAL_HPP
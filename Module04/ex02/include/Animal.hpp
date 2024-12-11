/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:10:37 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/11 10:50:22 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP
# define __ANIMAL_HPP

# define RESET "\033[0m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Animal
{
protected:
	string type;
public:
	Animal();
	virtual ~Animal();
	Animal & operator=(const Animal & src);

	const string getType() const;
	virtual void makeSound( void ) const = 0;
};


#endif //__ANIMAL_HPP
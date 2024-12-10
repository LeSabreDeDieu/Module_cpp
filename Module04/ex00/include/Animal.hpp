/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:10:37 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/10 15:45:19 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP
# define __ANIMAL_HPP

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
	~Animal();
	Animal & operator=(const Animal & src);

	const string getType() const;
	virtual void makeSound( void ) const;
};


#endif //__ANIMAL_HPP
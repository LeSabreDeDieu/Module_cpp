/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:25:48 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/13 10:51:28 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
private:
	Brain *_brain;
public:
	Dog();
	Dog(const Dog & src);
	~Dog();
	Dog & operator=(const Dog & src);

	virtual void makeSound( void ) const;
};

#endif //DOG_HPP
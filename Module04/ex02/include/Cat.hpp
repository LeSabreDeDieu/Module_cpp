/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:15:57 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/13 10:51:13 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
private:
	Brain *_brain;
public:
	Cat();
	Cat(const Cat & src);
	~Cat();
	
	Cat & operator=(const Cat & src);

	virtual void makeSound( void ) const;
};

#endif //CAT_HPP
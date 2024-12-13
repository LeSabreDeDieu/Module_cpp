/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:10:37 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/13 10:38:17 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AANIMAL_HPP
# define __AANIMAL_HPP

# define RESET "\033[0m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"

#include <iostream>

class AAnimal {
protected:
	std::string _type;
public:
	AAnimal();
	AAnimal(const std::string type);
	AAnimal(const AAnimal & src);
	virtual ~AAnimal();

	AAnimal & operator=(const AAnimal & src);

	const std::string getType() const;
	virtual void makeSound( void ) const = 0;
};


#endif //__AANIMAL_HPP
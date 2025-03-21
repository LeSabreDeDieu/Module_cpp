/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 07:58:17 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/16 08:36:56 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {
protected:
	std::string _type;
public:
	WrongAnimal();
	WrongAnimal(const std::string type);
	WrongAnimal(const WrongAnimal & src);
	virtual ~WrongAnimal();

	WrongAnimal & operator=(const WrongAnimal & src);

	const std::string getType() const;
	void makeSound( void ) const;
};


#endif //WRONGANIMAL_HPP
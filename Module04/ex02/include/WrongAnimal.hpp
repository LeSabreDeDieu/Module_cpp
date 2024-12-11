/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 07:58:17 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/11 08:21:00 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

using std::cout;
using std::endl;
using std::string;

class WrongAnimal
{
protected:
	string type;
public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal & operator=(const WrongAnimal & src);

	const string getType() const;
	virtual void makeSound( void ) const;
};


#endif //WRONGANIMAL_HPP
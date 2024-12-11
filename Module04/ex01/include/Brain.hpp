/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 08:32:24 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/11 08:55:27 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

using std::cout;
using std::endl;
using std::string;

#define NBIDEAS 100

class Brain
{
private : 
	string _ideas[NBIDEAS];
public :
	Brain();
	Brain( const Brain & src );
	
	const string *getIdeas() const;
	Brain & operator=( const Brain & src );

	~Brain();
};

#endif //BRAIN_HPP
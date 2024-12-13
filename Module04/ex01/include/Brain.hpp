/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 08:32:24 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/13 10:46:11 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

#define NBIDEAS 100

class Brain {
private : 
	std::string _ideas[NBIDEAS];
public :
	Brain();
	Brain( const Brain & src );
	~Brain();
	
	Brain & operator=( const Brain & src );

	const std::string *getIdeas() const;
};

#endif //BRAIN_HPP
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 08:38:41 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/11 08:55:51 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() { cout << "Brain constructor called" << endl; }

Brain::~Brain() { cout << "Brain destructor called" << endl; }

Brain::Brain( const Brain & src ) {
	cout << "Brain copy constructor called" << endl;
	for (int i = 0; i < NBIDEAS; i++)
		this->_ideas[i] = src._ideas[i];
}

Brain & Brain::operator=( const Brain & src ) {
	if (this != &src)
	{
		for (int i = 0; i < NBIDEAS; i++)
			this->_ideas[i] = src._ideas[i];
	}
	return *this;
}

const string *Brain::getIdeas() const { return _ideas; }

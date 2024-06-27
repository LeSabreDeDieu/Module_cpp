/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 23:14:27 by sgabsi            #+#    #+#             */
/*   Updated: 2024/06/27 08:30:37 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

using std::endl;

PhoneBook::PhoneBook() :
	_isEmpty (true)
{}

void PhoneBook::addContact(Contact contact) {
	static size_t index = 0;

	if (this->_isEmpty)
		this->_isEmpty = false;
	this->_repertoire[index%8] = contact;
	index++;
}

const Contact *PhoneBook::getRepertoire() const { return _repertoire; }
bool PhoneBook::isEmpty() const { return _isEmpty; }

ostream& operator<< (ostream &os, PhoneBook const &repertoire) {
	os << "----------------------------------------" << endl;
	os << "|INDEX| FIRSTNAME|  LASTNAME|  NICKNAME|" << endl;
	if (!repertoire.isEmpty()) {
		for (int i = 0; i < 8; i++)
		{
			if (repertoire.getRepertoire()[i].getFirstName() != "inconnu"){
				os << "|    " << i ;
				
				if (repertoire.getRepertoire()[i].getFirstName().length() >= 10)
					os << "|" << repertoire.getRepertoire()[i].getFirstName().substr(0,9).append(".");
				else {
					os << "|" ;
					size_t size = (size_t)10 - repertoire.getRepertoire()[i].getFirstName().length();
					for (size_t i = 0; i < size; i++)
						os << " ";
					os << repertoire.getRepertoire()[i].getFirstName();
				}
				
				if (repertoire.getRepertoire()[i].getLastName().length() >= 10)
					os << "|" << repertoire.getRepertoire()[i].getLastName().substr(0,9).append(".");
				else {
					os << "|" ;
					size_t size = (size_t)10 - repertoire.getRepertoire()[i].getLastName().length();
					for (size_t i = 0; i < size; i++)
						os << " ";
					os << repertoire.getRepertoire()[i].getLastName();
				}

				if (repertoire.getRepertoire()[i].getNickName().length() >= 10)
					os << "|" << repertoire.getRepertoire()[i].getNickName().substr(0,9).append(".");
				else {
					os << "|" ;
					size_t size = (size_t)10 - repertoire.getRepertoire()[i].getNickName().length();
					for (size_t i = 0; i < size; i++)
						os << " ";
					os << repertoire.getRepertoire()[i].getNickName();
					
				}
				os << "|" << endl;
			}
		}
	}
	os << "----------------------------------------" << endl;
	return os;
}
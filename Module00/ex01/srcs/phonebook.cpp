/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 23:14:27 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/03 12:11:37 by sgabsi           ###   ########.fr       */
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
	this->_repertoire[index] = contact;
	if (index == 8)
		index = 0;
	else if (index < 8)
		index++;
}

const Contact *PhoneBook::getRepertoire() const { return _repertoire; }
bool PhoneBook::isEmpty() const { return _isEmpty; }

string readapt(string str){
	string readapt;
	
	readapt += "|";
	if (str.length() >= 10)
		readapt += str.substr(0,9).append(".");
	else
	{
		size_t size = (size_t)10 - str.length();
		for (size_t i = 0; i < size; i++)
			readapt += " ";
		readapt += str;
	}
	
	return readapt;
}

ostream& operator<< (ostream &os, PhoneBook const &repertoire) {
	os << "----------------------------------------" << endl;
	os << "|INDEX| FIRSTNAME|  LASTNAME|  NICKNAME|" << endl;
	if (!repertoire.isEmpty()) {
		for (int i = 0; i < 8; i++)
		{
			if (repertoire.getRepertoire()[i].getFirstName() != "inconnu") {
				os << "|    " << i ;
				os << readapt(repertoire.getRepertoire()[i].getFirstName());
				os << readapt(repertoire.getRepertoire()[i].getLastName());
				os << readapt(repertoire.getRepertoire()[i].getNickName());
				os << "|" << endl;
			}
		}
	}
	os << "----------------------------------------" << endl;
	return os;
}
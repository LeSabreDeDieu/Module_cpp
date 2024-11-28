/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 22:12:35 by sgabsi            #+#    #+#             */
/*   Updated: 2024/11/18 09:01:29 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/contact.hpp"

using std::endl;
using std::ostream;

Contact::Contact(string firstName, string lastName, string nickName, 
		string phoneNumber, string darkSecret) :
	_firstName(firstName),
	_lastName(lastName),
	_nickName(nickName),
	_phoneNumber(phoneNumber),
	_darkestSecret(darkSecret)
{}

string const Contact::getFirstName() const {
	return this->_firstName;
};
string const Contact::getLastName() const {
	return this->_lastName;
};
string const Contact::getNickName() const {
	return this->_nickName;
};
string const Contact::getPhoneNumber() const {
	return this->_phoneNumber;
};
string const Contact::getDarkestSecret() const {
	return this->_darkestSecret;
};

ostream& operator<<(ostream &os, Contact const &contact){
	os << "First name : "	<< contact.getFirstName()		<< endl;
	os << "Last name : "	<< contact.getLastName()		<< endl;
	os << "Nickname : "		<< contact.getNickName()		<< endl;
	os << "Phone number : " << contact.getPhoneNumber()		<< endl;
	os << "Dark secret : "	<< contact.getDarkestSecret() 	<< endl;
	return os;
};
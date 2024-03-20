/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 11:53:56 by sgabsi            #+#    #+#             */
/*   Updated: 2024/03/20 14:04:05 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.h"

contact::contact(){
	_firstName		=	"Inconnu";
	_lastName 		=	"Inconnu";
	_nickname		=	"Inconnu";
	_phoneNumber	=	"Inconnu";
	_darkSecret 	=	"Inconnu";
}

contact::contact(std::string firstName, std::string lastName, std::string nickname,
				std::string phoneNumber, std::string darkSecret){
	_firstName		=	firstName;
	_lastName 		=	lastName;
	_nickname		=	nickname;
	_phoneNumber	=	phoneNumber;
	_darkSecret 	=	darkSecret;
}

std::string const contact::getFirstName() { return _firstName; }
std::string const contact::getLastName() { return _lastName; }
std::string const contact::getNickname() { return _nickname; }
std::string const contact::getPhoneNumber() { return _phoneNumber; }
std::string const contact::getDarkSecret() { return _darkSecret; }
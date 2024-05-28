/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 11:53:56 by sgabsi            #+#    #+#             */
/*   Updated: 2024/05/28 17:20:54 by sgabsi           ###   ########.fr       */
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

void contact::printContact(){
	std::cout << "First Name : " << _firstName << std::endl;
	std::cout << "Last Name : " << _lastName << std::endl;
	std::cout << "Nickname : " << _nickname << std::endl;
	std::cout << "Phone Number : " << _phoneNumber << std::endl;
	std::cout << "Dark Secret : " << _darkSecret << std::endl;
}
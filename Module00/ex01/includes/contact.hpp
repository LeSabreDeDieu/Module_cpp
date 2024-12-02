/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 22:01:25 by sgabsi            #+#    #+#             */
/*   Updated: 2024/11/28 13:33:48 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
using std::string;
using std::ostream;

class Contact
{
private:
	string _firstName;
	string _lastName;
	string _nickName;
	string _phoneNumber;
	string _darkestSecret;
public:
	Contact(string firstName = "inconnu", string lastName = "inconnu", string nickName = "inconnu", 
			string phoneNumber = "inconnu", string darkSecret = "inconnu");

	string const getFirstName() const;
	string const getLastName() const;
	string const getNickName() const;
	string const getPhoneNumber() const;
	string const getDarkestSecret() const;
};

ostream& operator<< (ostream &os, Contact const &contact);
#endif

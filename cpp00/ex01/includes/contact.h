/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 11:39:55 by sgabsi            #+#    #+#             */
/*   Updated: 2024/03/20 14:04:34 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>

class contact
{
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkSecret;
public:
	contact();
	contact(std::string firstName, std::string lastName, std::string nickname,
			std::string phoneNumber, std::string darkSecret);
	
	std::string const getFirstName();
	std::string const getLastName();
	std::string const getNickname();
	std::string const getPhoneNumber();
	std::string const getDarkSecret();

	void printContact(){
		std::cout << "First name : " << this->getFirstName() << std::endl;
		std::cout << "Last name : " << this->getFirstName() << std::endl;
		std::cout << "Nickname : " << this->getFirstName() << std::endl;
		std::cout << "Phone number: " << this->getFirstName() << std::endl;
		std::cout << "Dark Secret : " << this->getFirstName() << std::endl;
	}
};


#endif
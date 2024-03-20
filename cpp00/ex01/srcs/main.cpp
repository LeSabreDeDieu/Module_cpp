/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 11:57:37 by sgabsi            #+#    #+#             */
/*   Updated: 2024/03/20 14:06:31 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "../includes/contact.h"
#include "../includes/phoneBook.h"

int main()
{
	std::string choix;
	phoneBook *rep = new phoneBook();
	int	numContact = 0;
	
	do {
		std::cout << "\tADD\t|\tSEARCH\t|\tEXIT" << std::endl;
		std::cin >> choix;
		int i = 0;
		while (choix[i])
		{
			choix[i] = toupper(choix[i]);
			i++;
		}
		if (choix == "ADD")
		{
			std::string data[5];
			std::cout << "firstname : ";
			std::cin >> data[0];
			std::cout << "lastname : ";
			std::cin >> data[1];
			std::cout << "nickname : ";
			std::cin >> data[2];
			std::cout << "phone num : ";
			std::cin >> data[3];
			std::cout << "dark secret : ";
			std::cin >> data[4];
			contact contact(data[0], data[1], data[2], data[3], data[4]);
			rep->addContact(contact, numContact);
			numContact++;
		}
		else if (choix == "SEARCH")
		{
			for (int i = 0; i < 8; i++)
			{
				if (rep->getContacts() != NULL)
					std::cout << i << " |" << rep->getContacts()[i].getFirstName() << " |" << rep->getContacts()[i].getLastName() << " |" << rep->getContacts()[i].getNickname() << std::endl;
			}
			std::cout << "Donner l'index du contact a afficher : ";
			std::cin >> choix;
			int choix_num = 0;
			while (choix <= "0" || choix >= "8")
			{
				std::cout << "L'index indique n'existe pas. \nDonner l'index du contact a afficher : ";
				std::cin >> choix_num;
			}
			rep->getContacts()[choix_num].printContact();
		}
	} while (choix != "EXIT");
	return 0;
}

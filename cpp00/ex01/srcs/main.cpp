/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 11:57:37 by sgabsi            #+#    #+#             */
/*   Updated: 2024/05/28 17:52:15 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "../includes/contact.h"
#include "../includes/phoneBook.h"

std::string truncate(std::string str, size_t width, bool show_ellipsis=true)
{
    if (str.length() > width)
	{
        if (show_ellipsis)
            return str.substr(0, width) + ".";
        else
            return str.substr(0, width);
	}
    return str;
}

int main()
{
	std::string choix;
	phoneBook *rep = new phoneBook();
	long long	numContact = 0;
	
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
			rep->addContact(contact(data[0], data[1], data[2], data[3], data[4]), numContact);
			numContact++;
		}
		else if (choix == "SEARCH")
		{
			for (int i = 0; i < 8; i++)
			{
				
				if (rep->getContacts() != NULL)
					std::cout << i << " |" << truncate(rep->getContacts()[i]._firstName, 9) << " |" << truncate(rep->getContacts()[i]._lastName, 9) << " |" << truncate(rep->getContacts()[i]._nickname, 9) << std::endl;
			}
			std::cout << "Donner l'index du contact a afficher : ";
			std::cin >> choix;
			int choix_num = 0;
			while (choix_num < 0 || choix_num >= 8)
			{
				std::cout << "L'index indique n'existe pas. \nDonner l'index du contact a afficher : ";
				std::cin >> choix_num;
			}
			rep->getContacts()[choix_num].printContact();
		}
	} while (choix != "EXIT");
	return 0;
}

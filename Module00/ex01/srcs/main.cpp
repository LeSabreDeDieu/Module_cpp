/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 22:55:21 by sgabsi            #+#    #+#             */
/*   Updated: 2024/07/08 15:26:16 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::getline;
using std::cin;

int	main(){
	PhoneBook *rep = new PhoneBook();
	string command;

	do {
		cout << "ADD | SEARCH | EXIT\n> ";
		cin >> command;
		for (size_t i = 0; i < command.size(); i++)
			command[i] = toupper(command[i]);
		if (command == "ADD"){
			cout << "Name: ";
			string name;
			cin >> name;
			
			cout << "Last name: ";
			string last_name;
			cin >> last_name;
			
			cout << "Nickname: ";
			string nickname;
			cin >> nickname;
			
			cout << "Phone number: ";
			string phone_number;
			cin >> phone_number;

			cout << "darkest secret : ";
			string darkest_secret;
			cin >> darkest_secret;
			
			rep->addContact(Contact(name, last_name, nickname, phone_number, darkest_secret));
		}
		else if (command == "SEARCH"){
			int index;
			cout << *rep;
			if (!rep->isEmpty()) {
				cout << "indiquez l'index du contact a afficher : " << endl;
				cin >> index;
				while (index < 0 || index >= 8 || rep->getRepertoire()[index].getFirstName() == "inconnu"){
					cout << "ERREUR : l'index indiquer n'existe pas ou le nombre de contact est insuffisant !" << endl;
					cout << "indiquez l'index du contact a afficher : " << endl;
					cin >> index;
				}
				cout << rep->getRepertoire()[index];
			}
		}
		cout << "\n";
	} while (command != "EXIT");
	delete rep;
	return 0;
}

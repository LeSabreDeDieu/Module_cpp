/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 22:55:21 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/04 08:56:34 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>

using std::cout;
using std::endl;
using std::string;
using std::getline;
using std::cin;

string get_user_input(string prompt, string error_message)
{
	string str;
	cout << prompt;
	do {
		getline(cin, str);
		if (cin.eof())
		{
			cout << "\nEnd loop detected. Now leaving program" << endl;
			return "";
		}
		if (cin.fail())
		{
			cout << "\nError while get input" << endl;
			return "";
		}
		for (size_t i = 0; i < str.size(); i++){
			if (!isprint(str[i]))
			{
				str = "";
				break ;
			}
		}
		if (str.empty())
			cout << error_message;
	} while(str.empty());
	return (str);
}

int	main(){
	PhoneBook *rep = new PhoneBook();
	string command;

	do {
		command = get_user_input("ADD | SEARCH | EXIT\n> ", "Bad input detected !\nADD | SEARCH | EXIT\n> ");
		if (command == "") { delete rep; exit (1); }
		for (size_t i = 0; i < command.size(); i++)
			command[i] = toupper(command[i]);
		if (command == "ADD"){

			string name = get_user_input("Name : ", "Bad input detected !\nPlease enter a valid name : ");
			if (name == "") { delete rep; exit (1); }
			string last_name = get_user_input("Last name : ", "Bad input detected !\nPlease enter a valid last name : ");
			if (last_name == "") { delete rep; exit (1); }
			string nickname = get_user_input("Nickname : ", "Bad input detected !\nPlease enter a valid nickname : ");
			if (nickname == "") { delete rep; exit (1); }
			string phone_number = get_user_input("Phone number : ", "Bad input detected !\nPlease enter a valid phone number : ");
			if (phone_number == "") { delete rep; exit (1); }
			string darkest_secret = get_user_input("Darkest secret : ", "Bad input detected !\nPlease enter a valid darkest secret : ");
			if (darkest_secret == "") { delete rep; exit (1); }
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

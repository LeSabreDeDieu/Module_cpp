/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 11:26:01 by sgabsi            #+#    #+#             */
/*   Updated: 2024/07/04 12:29:23 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

using std::cout;
using std::endl;

enum levels {
	Debug,
	Info,
	Warning,
	Error
};

Harl::Harl () {
	Complaints[0].level = "DEBUG";
	Complaints[0].action = &Harl::debug;
	Complaints[1].level = "INFO";
	Complaints[1].action = &Harl::info;
	Complaints[2].level = "WARNING";
	Complaints[2].action = &Harl::warning;
	Complaints[3].level = "ERROR";
	Complaints[3].action = &Harl::error;
}

Harl::~Harl(){}

void Harl::debug() {
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << endl;
}

void Harl::info() {
	cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << endl;
}

void Harl::warning() {
	cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << endl;
}

void Harl::error() {
	cout << "This is unacceptable ! I want to speak to the manager now." << endl;
}

void Harl::complain(std::string level) {
	int levelHarl = 5;
	
	for (size_t i = 0; i < level.length(); i++)
	{
		level[i] = toupper(level[i]);
	}
	
	for (int i = 0; i < 4; i++)
	{
		if (this->Complaints[i].level == level) {
			levelHarl = i;
			break;
		}
	}
	
	switch (levelHarl) {
		
	case Debug:
		cout << "[ DEBUG ]" << endl;
		(this->*Complaints[0].action)();
		cout << endl;
		
	case Info:
		cout << "[ INFO ]" << endl;
		(this->*Complaints[1].action)();
		cout << endl;
		
	case Warning:
		cout << "[ WARNING ]" << endl;
		(this->*Complaints[2].action)();
		cout << endl;
		
	case Error:
		cout << "[ ERROR ]" << endl;
		(this->*Complaints[3].action)();
		cout << endl;
		break;
		
	default:
		cout << "[ Probably complaining about insignificant problems ]" << endl;
		break;
	}
}
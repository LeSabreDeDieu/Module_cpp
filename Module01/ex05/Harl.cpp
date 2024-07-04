/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 11:26:01 by sgabsi            #+#    #+#             */
/*   Updated: 2024/07/04 12:10:51 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

using std::cout;
using std::endl;

Harl::Harl () {
	Complaints[0].level = "Debug";
	Complaints[0].action = &Harl::debug;
	Complaints[1].level = "Info";
	Complaints[1].action = &Harl::info;
	Complaints[2].level = "Warning";
	Complaints[2].action = &Harl::warning;
	Complaints[3].level = "Error";
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
	for (int i = 0; i < 4; i++)
	{
		if (this->Complaints[i].level == level) {
			(this->*Complaints[i].action)();
			break;
		}
	}
}
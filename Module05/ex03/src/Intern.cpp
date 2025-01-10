/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:59:44 by sgabsi            #+#    #+#             */
/*   Updated: 2025/01/09 16:36:36 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

using std::string;

Intern::Intern() {}

Intern::Intern(const Intern& other) {
	*this = other;
}

Intern& Intern::operator=(const Intern& other) {
	if(this != &other) {
		*this = other;
	}
	return *this;
}

Intern::~Intern() {}

static AForm * createShrubbryForm(const string target) {
	return (new ShrubberyCreationForm(target));
}

static AForm * createRobotomyForm(const string target) {
	return (new RobotomyRequestForm(target));
}

static AForm * createPresidentialForm(const string target) {
	return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(string name, string target) {
	typedef AForm *( *func )(const string target);
	struct formCreator {
		string name;
		func _func;
	};
	const formCreator autorizeForms[] = {
		{"ShrubberyCreationForm", &createShrubbryForm},
		{"RobotomyRequestForm", &createRobotomyForm},
		{"PresidentialPardonForm", &createPresidentialForm}
	};
	for(int i = 0; i < 3; i++)
	{
		if (name == autorizeForms[i].name)
		{
			std::cout << "Intern create form " << name << std::endl;
			return autorizeForms[i]._func(target);
		}
	}
	std::cout << "The form " << name << " that the intern want to create doesn't existe" << std::endl;
	return NULL;
}
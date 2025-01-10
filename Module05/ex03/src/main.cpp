/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 09:40:54 by sgabsi            #+#    #+#             */
/*   Updated: 2025/01/09 16:32:21 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"


using std::cout;
using std::endl;
using std::string;

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define RESET "\033[0m"

#define EXPECTED_EQ(a, b)(a == b ? cout << GREEN << "[OK]" << RESET << endl :\
                                    cout << RED << "[KO]" << RESET << " Expected: " << b << " | Got: " << a << endl << RESET) 

#define TEST(id, name, test) cout << YELLOW << "Test " << id << " : " << name << RESET << endl; test

int main( void ) {
    
	cout << "Testing exercise number 3 of module cpp 05 " << endl;

	cout << endl;
	cout << BLUE << "Testing Intern creation form : " << endl;
	cout << endl;

	TEST (1, "creation of ShrubberyCreationForm", {
		Intern intern;
		AForm *form = intern.makeForm("ShrubberyCreationForm", "home");
		EXPECTED_EQ(form->getName(), "ShrubberyCreationForm");
		EXPECTED_EQ(form->getTarget(), "home");
		delete form;
	})

	TEST (2, "creation of RobotomyRequestForm", {
		Intern intern;
		AForm *form = intern.makeForm("RobotomyRequestForm", "home");
		EXPECTED_EQ(form->getName(), "RobotomyRequestForm");
		EXPECTED_EQ(form->getTarget(), "home");
		delete form;
	})

	TEST (3, "creation of PresidentialPardonForm", {
		Intern intern;
		AForm *form = intern.makeForm("PresidentialPardonForm", "home");
		EXPECTED_EQ(form->getName(), "PresidentialPardonForm");
		EXPECTED_EQ(form->getTarget(), "home");
		delete form;
	})

	TEST (4, "creation of Unkown Form", {
		Intern intern;
		AForm *form = intern.makeForm("unknown", "home");
		EXPECTED_EQ(form, 0);
	})

    return 0;
}

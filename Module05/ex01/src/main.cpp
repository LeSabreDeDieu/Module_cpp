/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 09:40:54 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/18 17:09:48 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

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
    
    cout << BLUE << "Form tests" << RESET << endl;
	cout << "----------------" << endl;
	
	TEST("1", "Create Form with Correct information", {
		Form form("form", 1, 1);
		cout << form << endl;
		EXPECTED_EQ(form.getName(), "form");
		EXPECTED_EQ(form.getGradeReqSign(), 1);
		EXPECTED_EQ(form.getGradeReqExec(), 1);
	});

    cout << endl;

	TEST("2", "Create Form with Too Low Sign-Grade", {
		try {
			Form form("form", 151, 1);
		} catch (std::exception &e) {
			EXPECTED_EQ(string(e.what()), "Grade too low or the bureaucrat how wanted to sign as a too low grade");
		}
	});

	TEST("3", "Create Form with Too High Sign-Grade", {
		try {
			Form form("form", 0, 1);
		} catch (std::exception &e) {
			EXPECTED_EQ(string(e.what()), "Grade too high");
		}
	});

    cout << endl;

	TEST("4", "Create Form with Too Low Execute-Grade", {
		try {
			Form form("form", 1, 151);
		} catch (std::exception &e) {
			EXPECTED_EQ(string(e.what()), "Grade too low or the bureaucrat how wanted to sign as a too low grade");
		}
	});

    cout << endl;

	TEST("5", "Create Form with Too High Execute-Grade", {
		try {
			Form form("form", 1, 0);
		} catch (std::exception &e) {
			EXPECTED_EQ(string(e.what()), "Grade too high");
		}
	});

    cout << endl;

	TEST("6", "Create Form with Correct information and Sign it", {
		Form form("form", 1, 1);
		Bureaucrat bureaucrat("bureaucrat", 1);
		cout << form << "\n" << bureaucrat << endl;
		form.beSigned(bureaucrat);
		EXPECTED_EQ(form.isSigned(), true);
	});

    cout << endl;

	TEST("7", "Create Form with Correct information and Sign it with Too Low Grade", {
		Form form("form", 1, 1);
		Bureaucrat bureaucrat("bureaucrat", 2);
		cout << form << "\n" << bureaucrat << endl;
		try {
			form.beSigned(bureaucrat);
		} catch (std::exception &e) {
			EXPECTED_EQ(string(e.what()), "Grade too low or the bureaucrat how wanted to sign as a too low grade");
		}
	});

	cout << "----------------" << endl;
	cout << BLUE << "End of Form tests" << RESET << endl;

    return 0;
}

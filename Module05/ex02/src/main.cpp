/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 09:40:54 by sgabsi            #+#    #+#             */
/*   Updated: 2025/02/04 11:26:48 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


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
    
	cout << "Testing exercise number 2 of module cpp 05 " << endl;

	cout << BLUE << "\nShrubbery Form tests : " << RESET << endl;
	cout << endl;
	cout << GREEN << "Tests in correct situation : \n" << endl;

	TEST(1, "Creation shrubbery form with target home", {
		ShrubberyCreationForm form("home");
		EXPECTED_EQ(form.getName(), "ShrubberyCreationForm");
		EXPECTED_EQ(form.getTarget(), "home");
		EXPECTED_EQ(form.isSigned(), false);
		EXPECTED_EQ(form.getGradeReqSign(), 145);
		EXPECTED_EQ(form.getGradeReqExec(), 137);
	});

	TEST(2, "Creation of Bureaucrat", {
		Bureaucrat bureaucrat("bur", 150);
		EXPECTED_EQ(bureaucrat.getName(), "bur") ;
		EXPECTED_EQ(bureaucrat.getGrade(), 150);
	});

	TEST(3, "Test sign a Form with grade of 145", {
		ShrubberyCreationForm form("home");
		Bureaucrat bureaucrat("bur", 145);
		bureaucrat.signForm(form);
		EXPECTED_EQ(form.isSigned(), true);
	});

	TEST(4, "Test sign a Form with grade of 137", {
		ShrubberyCreationForm form("home");
		Bureaucrat bureaucrat("bur", 137);
		bureaucrat.signForm(form);
		EXPECTED_EQ(form.isSigned(), true);
	});

	TEST(5, "Test sign and execute a Form with grade of 137", {
		ShrubberyCreationForm form("home");
		Bureaucrat bureaucrat("bur", 137);
		bureaucrat.signForm(form);
		bureaucrat.executeForm(form);
	});

	cout << endl;
	cout << RED << "Tests in incorrect situation : \n" << RESET << endl;
	
	TEST(6, "Test sign a Form with incorrect grade", {
		ShrubberyCreationForm form("home");
		Bureaucrat bureaucrat("bur", 150);
		bureaucrat.signForm(form);
		EXPECTED_EQ(form.isSigned(), false);
	});

	TEST(7, "Test can sign but cannot execute a Form (with grade 145)", {
		ShrubberyCreationForm form("home");
		Bureaucrat bureaucrat("bur", 145);
		bureaucrat.signForm(form);
		EXPECTED_EQ(form.isSigned(), true);
		bureaucrat.executeForm(form);
	});

	TEST(8, "Test not sign but can execute a Form (with grade 137)", {
		ShrubberyCreationForm form("home");
		Bureaucrat bureaucrat("bur", 137);
		EXPECTED_EQ(form.isSigned(), false);
		bureaucrat.executeForm(form);
	});

	cout << endl;
	cout << BLUE << "END Shrubbery Form tests\n" << RESET << endl;
	cout << "----------------------------" << endl;
	cout << BLUE << "\nRobotomy Form tests : \n" << RESET << endl;
	cout << GREEN << "Tests in correct situation : \n" << endl;

	TEST(1, "Creation Robotomy form with target home", {
		RobotomyRequestForm form("home");
		EXPECTED_EQ(form.getName(), "RobotomyRequestForm");
		EXPECTED_EQ(form.getTarget(), "home");
		EXPECTED_EQ(form.isSigned(), false);
		EXPECTED_EQ(form.getGradeReqSign(), 72);
		EXPECTED_EQ(form.getGradeReqExec(), 45);
	});

	TEST(2, "Creation of Bureaucrat", {
		Bureaucrat bureaucrat("bur", 150);
		EXPECTED_EQ(bureaucrat.getName(), "bur") ;
		EXPECTED_EQ(bureaucrat.getGrade(), 150);
	});

	TEST(3, "Test sign a Form with grade of 72", {
		RobotomyRequestForm form("home");
		Bureaucrat bureaucrat("bur", 72);
		bureaucrat.signForm(form);
		EXPECTED_EQ(form.isSigned(), true);
	});

	TEST(4, "Test sign a Form with grade of 45", {
		RobotomyRequestForm form("home");
		Bureaucrat bureaucrat("bur", 45);
		bureaucrat.signForm(form);
		EXPECTED_EQ(form.isSigned(), true);
	});

	TEST(5, "Test sign and execute a Form with grade of 45", {
		RobotomyRequestForm form("home");
		Bureaucrat bureaucrat("bur", 45);
		bureaucrat.signForm(form);
		bureaucrat.executeForm(form);
	});

	cout << endl;
	cout << RED << "Tests in incorrect situation : \n" << RESET << endl;
	
	TEST(6, "Test sign a Form with incorrect grade", {
		RobotomyRequestForm form("home");
		Bureaucrat bureaucrat("bur", 150);
		bureaucrat.signForm(form);
		EXPECTED_EQ(form.isSigned(), false);
	});

	TEST(7, "Test can sign but cannot execute a Form (with grade 72)", {
		RobotomyRequestForm form("home");
		Bureaucrat bureaucrat("bur", 72);
		bureaucrat.signForm(form);
		EXPECTED_EQ(form.isSigned(), true);
		bureaucrat.executeForm(form);
	});

	TEST(8, "Test not sign but can execute a Form (with grade 45)", {
		RobotomyRequestForm form("home");
		Bureaucrat bureaucrat("bur", 45);
		EXPECTED_EQ(form.isSigned(), false);
		bureaucrat.executeForm(form);
	});

	cout << endl;
	cout << BLUE << "END Robotomy Form tests\n" << RESET << endl;
	cout << "----------------------------" << endl;
	cout << BLUE << "\nPresidential Form tests : \n" << RESET << endl;
	cout << GREEN << "Tests in correct situation : \n" << endl;

	TEST(1, "Creation Presidential form with target home", {
		PresidentialPardonForm form("home");
		EXPECTED_EQ(form.getName(), "PresidentialPardonForm");
		EXPECTED_EQ(form.getTarget(), "home");
		EXPECTED_EQ(form.isSigned(), false);
		EXPECTED_EQ(form.getGradeReqSign(), 25);
		EXPECTED_EQ(form.getGradeReqExec(), 5);
	});

	TEST(2, "Creation of Bureaucrat", {
		Bureaucrat bureaucrat("bur", 150);
		EXPECTED_EQ(bureaucrat.getName(), "bur") ;
		EXPECTED_EQ(bureaucrat.getGrade(), 150);
	});

	TEST(3, "Test sign a Form with grade of 25", {
		PresidentialPardonForm form("home");
		Bureaucrat bureaucrat("bur", 25);
		bureaucrat.signForm(form);
		EXPECTED_EQ(form.isSigned(), true);
	});

	TEST(4, "Test sign a Form with grade of 5", {
		PresidentialPardonForm form("home");
		Bureaucrat bureaucrat("bur", 5);
		bureaucrat.signForm(form);
		EXPECTED_EQ(form.isSigned(), true);
	});

	TEST(5, "Test sign and execute a Form with grade of 5", {
		PresidentialPardonForm form("home");
		Bureaucrat bureaucrat("bur", 5);
		bureaucrat.signForm(form);
		bureaucrat.executeForm(form);
	});

	cout << endl;
	cout << RED << "Tests in incorrect situation : \n" << RESET << endl;
	
	TEST(6, "Test sign a Form with incorrect grade", {
		PresidentialPardonForm form("home");
		Bureaucrat bureaucrat("bur", 150);
		bureaucrat.signForm(form);
		EXPECTED_EQ(form.isSigned(), false);
	});

	TEST(7, "Test can sign but cannot execute a Form (with grade 25)", {
		PresidentialPardonForm form("home");
		Bureaucrat bureaucrat("bur", 25);
		bureaucrat.signForm(form);
		EXPECTED_EQ(form.isSigned(), true);
		bureaucrat.executeForm(form);
	});

	TEST(8, "Test not sign but can execute a Form (with grade 5)", {
		PresidentialPardonForm form("home");
		Bureaucrat bureaucrat("bur", 5);
		EXPECTED_EQ(form.isSigned(), false);
		bureaucrat.executeForm(form);
	});

	cout << endl;
	cout << BLUE << "END Presidential Form tests" << RESET << endl;

    return 0;
}

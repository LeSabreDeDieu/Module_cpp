/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:38:06 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/18 17:11:09 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

using std::cout;
using std::endl;
using std::string;

Bureaucrat::Bureaucrat() : _name("None"), _grade(LOWESTGRADE) {}

Bureaucrat::Bureaucrat(string name, int grade) : 
    _name(name)
{
    if (grade < HIGHESTGRADE) {
        throw (GradeTooHighException());
    } 
    if (grade > LOWESTGRADE) {
        throw (GradeTooLowException());
    } 
    else {
        _grade = grade;
    }
}
    
Bureaucrat::Bureaucrat(const Bureaucrat& other) :
    _name(other._name),
    _grade(other._grade) 
{}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if(this != &other) {
        _grade = other._grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {}

void Bureaucrat::promote() {
    if (_grade - 1 < HIGHESTGRADE)
    {
        throw (GradeTooHighException());
    }
    cout << "Bureaucrat " << _name << " has got a promote 🤑 !" << endl;
    _grade--;
};
void Bureaucrat::degrade() {
    if (_grade + 1 > LOWESTGRADE)
    {
        throw (GradeTooLowException());
    }
    cout << "Bureaucrat " << _name << " has got a degrade 😢." << endl;
    _grade++;
};

const char * Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade too high or wanted to promote but is in highest promotion !");
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade too low or wanted to degrade but is in lowest promotion !");
}

const string Bureaucrat::getName() const { return _name; };
int Bureaucrat::getGrade() const { return _grade; };

void Bureaucrat::signForm(Form &form) {
	try {
		form.beSigned(*this);
		cout << _name << " signed the form : " << form.getName() << endl;
	}
	catch (std::exception &e) {
		cout << _name << " couldn't sign the form : " << form.getName() << ". Reason : " << e.what() << "." << endl;
	}
}

std::ostream &operator<<( std::ostream & os, const Bureaucrat & bureaucrat) {
    os << "Bureaucrat " << bureaucrat.getName() <<  " is rank " << bureaucrat.getGrade() << ".";
    return os;
}
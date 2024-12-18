/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:34:31 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/18 17:10:31 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

using std::cout;
using std::endl;
using std::string;

Form::Form() : 
    _name("none"),
    _signed(false),
    _grade_req_sign(1),
    _grade_req_exec(1)
{}

Form::Form( const string name, const int grade_req_sign, const int grade_req_exec ) : 
    _name(name),
    _signed(false),
    _grade_req_sign(grade_req_sign),
    _grade_req_exec(grade_req_exec)
{
    if (_grade_req_sign < 1 || _grade_req_exec < 1) {
        throw(GradeTooHighException());
    }
    if (_grade_req_sign > 150 || _grade_req_exec > 150) {
        throw(GradeTooLowException());
    }
}

Form::Form(const Form& other) :
    _name(other._name),
    _signed(other._signed),
    _grade_req_sign(other._grade_req_sign),
    _grade_req_exec(other._grade_req_exec)
{}

Form::~Form() {}

Form& Form::operator=(const Form& other) {
    if(this != &other) {
        _signed = other._signed;
    }
    return *this;
}

std::string Form::getName() const { return _name; };
bool        Form::isSigned() const { return _signed; };
int         Form::getGradeReqSign() const { return _grade_req_sign; };
int         Form::getGradeReqExec() const { return _grade_req_exec; };

const char * Form::GradeTooHighException::what() const throw() {
    return "Grade too high";
}

const char * Form::GradeTooLowException::what() const throw() {
    return "Grade too low or the bureaucrat how wanted to sign as a too low grade";
}

const char * Form::AlreadySignedException::what() const throw() {
    return "The form is already signed";
}

void Form::beSigned( const Bureaucrat bureaucrat) {
    if (_signed == true)
    {
        throw (AlreadySignedException());
    }
    if (bureaucrat.getGrade() > _grade_req_sign)
    {
        throw (GradeTooLowException());
    }
    _signed = true;
};

std::ostream &operator<<( std::ostream &os, const Form &form ) {
    os << "The Form " << form.getName();
    if (form.isSigned()) {
        os << " is signed and has required grade " << form.getGradeReqSign() << " to be signed ";
    } 
    else {
        os << " isn't signed and require grade " << form.getGradeReqSign() << " to be signed ";
    }
    os << "and require grade " << form.getGradeReqExec() << " to be executed.";

    return os;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:34:31 by sgabsi            #+#    #+#             */
/*   Updated: 2025/01/09 15:21:23 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

using std::cout;
using std::endl;
using std::string;

AForm::AForm() :
    _name("none"),
    _target("unknown"),
    _signed(false),
    _grade_req_sign(1),
    _grade_req_exec(1)
{}

AForm::AForm( const string name, const string target, const int grade_req_sign, const int grade_req_exec ) : 
    _name(name),
    _target(target),
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

AForm::AForm(const AForm& other) :
    _name(other._name),
    _target(other._target),
    _signed(other._signed),
    _grade_req_sign(other._grade_req_sign),
    _grade_req_exec(other._grade_req_exec)
{}

AForm::~AForm() {}

AForm& AForm::operator=(const AForm& other) {
    if(this != &other) {
        _signed = other._signed;
    }
    return *this;
}

std::string AForm::getName() const { return _name; };
std::string AForm::getTarget() const { return _target; };
bool        AForm::isSigned() const { return _signed; };
int         AForm::getGradeReqSign() const { return _grade_req_sign; };
int         AForm::getGradeReqExec() const { return _grade_req_exec; };

const char * AForm::GradeTooHighException::what() const throw() {
    return "Grade too high";
}

const char * AForm::GradeTooLowException::what() const throw() {
    return "Grade too low or the bureaucrat how wanted to sign or execute have a too low grade";
}

const char * AForm::FormNotSignedExecption::what() const throw() {
    return ("Try to execute a form not signed");
}

const char * AForm::AlreadySignedException::what() const throw() {
    return ("The form is already signed");
}

void AForm::checkExectionRequirement(Bureaucrat const & executor) const {
    if (_signed == false) {
        throw (FormNotSignedExecption());
    }
    if (executor.getGrade() > _grade_req_exec) {
        throw (GradeTooLowException());
    }
}

void AForm::beSigned( const Bureaucrat bureaucrat) {
    if (_signed == true) {
        throw (AlreadySignedException());
    }
    if (bureaucrat.getGrade() > _grade_req_sign) {
        throw (GradeTooLowException());
    }
    _signed = true;
};

std::ostream &operator<<( std::ostream &os, const AForm &form ) {
    os << "The AForm " << form.getName();
    if (form.isSigned()) {
        os << " is signed and has required grade " << form.getGradeReqSign() << " to be signed ";
    } 
    else {
        os << " isn't signed and require grade " << form.getGradeReqSign() << " to be signed ";
    }
    os << "and require grade " << form.getGradeReqExec() << " to be executed.";

    return os;
}

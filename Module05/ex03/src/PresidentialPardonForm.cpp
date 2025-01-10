/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:59:46 by sgabsi            #+#    #+#             */
/*   Updated: 2025/01/09 14:24:04 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

using std::cout;
using std::endl;
using std::string;

PresidentialPardonForm::PresidentialPardonForm() : 
    AForm("PresidentialPardonForm", "Inconnu", 25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(const string target) :
    AForm("PresidentialPardonForm", target, 25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) :
    AForm(other)
{}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
    if(this != &other) {
        AForm::operator=(other);
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute( Bureaucrat const & bureaucrat ) const {
    checkExectionRequirement(bureaucrat);
    
    cout << getTarget() << " has been pardoned by Zaphod Beeblebrox. " << endl;
}

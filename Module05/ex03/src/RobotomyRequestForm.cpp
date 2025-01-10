/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:59:37 by sgabsi            #+#    #+#             */
/*   Updated: 2025/01/09 14:16:42 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "RobotomyRequestForm.hpp"

using std::cout;
using std::endl;
using std::string;

RobotomyRequestForm::RobotomyRequestForm() :
    AForm("RobotomyRequestForm", "Unknown", 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(const string target) :
    AForm("RobotomyRequestForm", target, 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) :
    AForm(other)
{}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    if(this != &other) {
        AForm::operator=(other);
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & bureaucrat) const {
    checkExectionRequirement(bureaucrat);
    
    srand (time(NULL));

    cout << "BzZzZzZzZzZzZz..." << endl;
    if (rand() % 2)
    {
        cout << getTarget() << " has been robotomized successfully !" << endl;
    }
    else
    {
        cout << "The robotomize has been failed ! try another time !" << endl;
    }
}

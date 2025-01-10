/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:43:19 by sgabsi            #+#    #+#             */
/*   Updated: 2025/01/06 12:42:05 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
public:
    // Constructors and destructors
    RobotomyRequestForm();
    RobotomyRequestForm(const std::string target);
    RobotomyRequestForm(const RobotomyRequestForm& other);
    ~RobotomyRequestForm();

    /* Operator overloads */
    RobotomyRequestForm& operator=(const RobotomyRequestForm& other);

    /* Member functions */
    void execute(Bureaucrat const & bureaucrat) const;
};

#endif //ROBOTOMYREQUESTFORM_HPP
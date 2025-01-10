/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:18:16 by sgabsi            #+#    #+#             */
/*   Updated: 2025/01/09 14:18:03 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
public:
    // Constructors and destructors
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string target);
    PresidentialPardonForm(const PresidentialPardonForm& other);
    ~PresidentialPardonForm();

    /* Operator overloads */
    PresidentialPardonForm& operator=(const PresidentialPardonForm& other);

    /* Member functions */
    void execute(Bureaucrat const & bureaucrat) const;
};

#endif //PRESIDENTIALPARDONFORM_HPP
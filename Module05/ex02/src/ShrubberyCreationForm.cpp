/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:59:24 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/18 18:11:59 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
    AForm("Shrubbery creation form", "unknown", false, 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) :
     _name(other._name),
    _signed(other._signed),
    _grade_req_sign(other._grade_req_sign),
    _grade_req_exec(other._grade_req_sign)
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    if(this != &other) {
        this._signed = other._signed;
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

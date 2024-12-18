/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:42:47 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/18 17:56:46 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ShrubberyCreationForm_HPP
#define ShrubberyCreationForm_HPP

#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm : private AForm {
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm& other);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
    ~ShrubberyCreationForm();
};

#endif //ShrubberyCreationForm_HPP

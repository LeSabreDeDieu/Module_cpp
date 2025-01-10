/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:58:06 by sgabsi            #+#    #+#             */
/*   Updated: 2025/01/09 15:59:23 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"

class Intern {
public:
	// Constructors and destructors
	Intern();
	Intern(const Intern& other);
	~Intern();

	/* Operator overloads */
	Intern& operator=(const Intern& other);

	/* Member functions */
	AForm *makeForm(std::string name, std::string target);
};

#endif //INTERN_HPP
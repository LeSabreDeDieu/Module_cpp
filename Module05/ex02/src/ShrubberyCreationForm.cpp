/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:59:24 by sgabsi            #+#    #+#             */
/*   Updated: 2025/01/22 11:18:42 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShrubberyCreationForm.hpp"

using std::cout;
using std::endl;
using std::string;

ShrubberyCreationForm::ShrubberyCreationForm() :
    AForm("ShrubberyCreationForm", "Unknown", 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) :
    AForm("ShrubberyCreationForm", target, 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) :
    AForm(other)
{}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    if(this != &other) {
        AForm::operator=(other);
    }
    return *this;
}

void ShrubberyCreationForm::execute (Bureaucrat const & bureaucrat) const {
    checkExectionRequirement(bureaucrat);
    
    string link = "./" + getTarget() + "_shrubbery";
    std::ofstream outfile(link.c_str());
    if (outfile.is_open() == false) {
        cout << "Couldn't create the form. Retry again" << endl;
        return ;
    }
    outfile << "                                                         ." << endl;
    outfile << "                                          .         ;  " << endl;
    outfile << "             .              .              ;%     ;;   " << endl;
    outfile << "               ,           ,                :;%  %;   " << endl;
    outfile << "                :         ;                   :;%;'     .,   " << endl;
    outfile << "       ,.        %;     %;            ;        %;'    ,;" << endl;
    outfile << "         ;       ;%;  %%;        ,     %;    ;%;    ,%'" << endl;
    outfile << "          %;       %;%;      ,  ;       %;  ;%;   ,%;' " << endl;
    outfile << "           ;%;      %;        ;%;        % ;%;  ,%;'" << endl;
    outfile << "            `%;.     ;%;     %;'         `;%%;.%;'" << endl;
    outfile << "             `:;%.    ;%%. %@;        %; ;@%;%'" << endl;
    outfile << "                `:%;.  :;bd%;          %;@%;'" << endl;
    outfile << "                  `@%:.  :;%.         ;@@%;'   " << endl;
    outfile << "                    `@%.  `;@%.      ;@@%;         " << endl;
    outfile << "                      `@%%. `@%%    ;@@%;        " << endl;
    outfile << "                        ;@%. :@%%  %@@%;       " << endl;
    outfile << "                          %@bd%%%bd%%:;     " << endl;
    outfile << "                            #@%%%%%:;;" << endl;
    outfile << "                            %@@%%%::;" << endl;
    outfile << "                            %@@@%(o);  . '         " << endl;
    outfile << "                            %@@@o%;:(.,'         " << endl;
    outfile << "                        `.. %@@@o%::;         " << endl;
    outfile << "                           `)@@@o%::;         " << endl;
    outfile << "                            %@@(o)::;        " << endl;
    outfile << "                           .%@@@@%::;         " << endl;
    outfile << "                           ;%@@@@%::;.          " << endl;
    outfile << "                          ;%@@@@%%:;;;. " << endl;
    outfile << "                      ...;%@@@@@%%:;;;;,..    " << endl;
    outfile << endl;
    outfile.close();
}

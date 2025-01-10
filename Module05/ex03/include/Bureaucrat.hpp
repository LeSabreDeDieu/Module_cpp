/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:03:39 by sgabsi            #+#    #+#             */
/*   Updated: 2025/01/09 15:03:13 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

#include <iostream>

#define HIGHESTGRADE 1
#define LOWESTGRADE 150

class AForm;

class Bureaucrat {
private:
    /* Attributes */
    const std::string _name;
    int _grade;
public:
    /* Constructors and destructors */
    Bureaucrat();
    Bureaucrat( std::string, int );
    Bureaucrat( const Bureaucrat & );
    ~Bureaucrat();

    Bureaucrat& operator=( const Bureaucrat & );
    
    /* Getters */
    const std::string getName() const ;
    int getGrade() const ;

    void signForm( AForm & );
    void executeForm( AForm const & );

    /* Methods */
    void promote();
    void degrade();

    /* Exceptions */
    class GradeTooHighException : public std::exception {
        public:
		    virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception {
        public:
		    virtual const char *what() const throw();
    };
};

std::ostream &operator<<( std::ostream &, const Bureaucrat & );

#endif //Bureaucrat_HPP

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:21:14 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/18 17:03:24 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_HPP
#define Form_HPP

#include <iostream>

class Bureaucrat;

class Form {
private:
    /* Attributes */
    const std::string _name;
    bool _signed;
    const int _grade_req_sign;
    const int _grade_req_exec;
public:
    /* Constructors and destructors */
    Form();
    Form( const std::string, const int, const int );
    Form( const Form& other );
    ~Form();

    Form& operator=( const Form& other );

    /* Getters */
    std::string getName() const;
    bool        isSigned() const;
    int         getGradeReqSign() const;
    int         getGradeReqExec() const;

    /* Methods */
    void beSigned( const Bureaucrat );

    /* Exceptions */
    class GradeTooHighException : public std::exception {
    public:
        virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        virtual const char *what() const throw();
    };
    class AlreadySignedException : public std::exception {
    public:
        virtual const char *what() const throw();
    };
};

std::ostream &operator<<( std::ostream &, const Form & );

#endif //Form_HPP

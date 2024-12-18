/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:21:14 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/18 18:11:39 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include <iostream>

class Bureaucrat;

class AForm {
private :
    /* Attributes */
    const std::string _name;
    const std::string _target;
    bool _signed;
    const int _grade_req_sign;
    const int _grade_req_exec;

protected:
	void	checkExectionRequirement(Bureaucrat const & executor) const;

public :
    /* Constructors and destructors */
    AForm();
    AForm( const std::string, const std::string, const int, const int );
    AForm( const AForm& other );
    virtual ~AForm();

    AForm& operator=( const AForm& other );

    /* Getters */
    std::string getName() const;
    std::string getTarget() const;
    bool        isSigned() const;
    int         getGradeReqSign() const;
    int         getGradeReqExec() const;

    /* Methods */
    void            beSigned( const Bureaucrat );
    virtual void    execute(Bureaucrat const & ) const = 0;

    /* Exceptions */
    class GradeTooHighException : public std::exception {
    public:
        virtual const char *what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char *what() const throw();
    };

    class FormNotSignedExecption : public std::exception {
	public:
		virtual const char *what() const throw();
	};
    
    class AlreadySignedException : public std::exception {
    public:
        virtual const char *what() const throw();
    };
};

std::ostream &operator<<( std::ostream &, const AForm & );

#endif //AForm_HPP

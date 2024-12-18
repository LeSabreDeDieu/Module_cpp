/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 09:40:54 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/18 10:49:52 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

using std::cout;
using std::endl;
using std::string;

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define RESET "\033[0m"

#define EXPECTED_EQ(a, b)(a == b ? cout << GREEN << "[OK]" << RESET << endl :\
                                    cout << RED << "[KO]" << RESET << " Expected: " << b << " | Got: " << a << endl << RESET) 

#define TEST(id, name, test) cout << YELLOW << "Test " << id << " : " << name << RESET << endl; test

int main( void ) {
    
    cout << BLUE << "Testing Throws with some context : " << RESET << "\n" << endl;

    TEST(1, "Highest grade", {
        try
        {
            cout << BLUE << "Testing with name \"bureaucrat\" and grade 1 ..." << RESET << endl;
            Bureaucrat bureaucrat("bureaucrat", 1);
            cout << "Name : " << std::flush;
            EXPECTED_EQ(bureaucrat.getName(), "bureaucrat");
            cout << "Grade : " << std::flush;
            EXPECTED_EQ(bureaucrat.getGrade(), 1);
        }
        catch(const std::exception& e)
        {
            EXPECTED_EQ(string(e.what()), "Grade too high or wanted to promote but is in highest promotion !");
            cout << "Grade : " << std::flush;
            EXPECTED_EQ(string("Over or equal to 1"), string("Over or equal to 1"));
        }
    });
    
    cout << endl;

    TEST(2, "Lowest grade", {
        try
        {
            cout << BLUE << "Testing with name \"bureaucrat\" and grade 150 ..." << RESET << endl;
            Bureaucrat bureaucrat("bureaucrat", 150);
            cout << "Name : " << std::flush;
            EXPECTED_EQ(bureaucrat.getName(), "bureaucrat");
            cout << "Grade : " << std::flush;
            EXPECTED_EQ(bureaucrat.getGrade(), 150);
        }
        catch(const std::exception& e)
        {
            EXPECTED_EQ(string(e.what()), "Grade too low or wanted to degrade but is in lowest promotion !");
            cout << "Grade : " << std::flush;
            EXPECTED_EQ(string("Under or equal to 150"), string("Under or equal to 150"));
        }
    });

    cout << endl;

    TEST(3, "Too high grade", {
        try
        {
            cout << BLUE << "Testing with name \"bureaucrat\" and grade 0 ..." << RESET << endl;
            Bureaucrat bureaucrat("bureaucrat", 0);
            cout << "Name : " << std::flush;
            EXPECTED_EQ(bureaucrat.getName(), "bureaucrat");
            cout << "Grade : " << std::flush;
            EXPECTED_EQ(bureaucrat.getGrade(), 0);
        }
        catch(const std::exception& e)
        {
            cout << "Exception catched : " << std::flush;
            EXPECTED_EQ(string(e.what()), "Grade too high or wanted to promote but is in highest promotion !");
            cout << "Grade : " << std::flush;
            EXPECTED_EQ(string("Under 1"), string("Over or equal to 1"));
        }
    });

    cout << endl;

    TEST(4, "Too low grade", {
        try
        {
            cout << BLUE << "Testing with name \"bureaucrat\" and grade 151 ..." << RESET << endl;
            Bureaucrat bureaucrat("bureaucrat", 151);
            cout << "Name : " << std::flush;
            EXPECTED_EQ(bureaucrat.getName(), "bureaucrat");
            cout << "Grade : " << std::flush;
            EXPECTED_EQ(bureaucrat.getGrade(), 151);
        }
        catch(const std::exception& e)
        {
            cout << "Exception catched : " << std::flush;
            EXPECTED_EQ(string(e.what()), "Grade too low or wanted to degrade but is in lowest promotion !");
            cout << "Grade : " << std::flush;
            EXPECTED_EQ(string("Over 150"), string("Under or equal to 150"));
        }
    });

    cout << endl;
    
    TEST(5, "Test right promotion", {
        Bureaucrat bureaucrat("bureaucrat", 2);
        try
        {
            cout << BLUE << "Testing promotion when bureaucrat is under highest grade ..." << RESET << endl;
            bureaucrat.promote();
            cout << "Promotion : " << std::flush;
            EXPECTED_EQ(bureaucrat.getGrade(), 1);
        }
        catch(const std::exception& e)
        {
            EXPECTED_EQ(string(e.what()), "Grade too high or wanted to promote but is in highest promotion !");
            cout << "Grade : " << std::flush;
            EXPECTED_EQ(string("Over or equal to 1"), string("Over or equal to 1"));
        }
    });
    
    cout << endl;
    
    TEST(6, "Test right degrade", {
        Bureaucrat bureaucrat("bureaucrat", 149);
        try
        {
            cout << BLUE << "Testing degrade when bureaucrat is over lowest grade ..." << RESET << endl;
            bureaucrat.degrade();
            cout << "Degrade : " << std::flush;
            EXPECTED_EQ(bureaucrat.getGrade(), 150);
        }
        catch(const std::exception& e)
        {
            EXPECTED_EQ(string(e.what()), "Grade too low or wanted to degrade but is in lowest promotion !");
            cout << "Grade : " << std::flush;
            EXPECTED_EQ(string("Under or equal to 150"), string("Under or equal to 150"));
        }
    });

    cout << endl;
    
    TEST(7, "Test wrong promotion", {
        Bureaucrat bureaucrat("bureaucrat", 1);
        try
        {
           cout << BLUE << "Testing promotion when bureaucrat is in highest grade ..." << RESET << endl;
           bureaucrat.promote();
           cout << "Promotion : " << std::flush;
           EXPECTED_EQ(bureaucrat.getGrade(), 0);
        }
        catch(const std::exception& e)
        {
            cout << "Exception catched : " << std::flush;
            EXPECTED_EQ(string(e.what()), "Grade too high or wanted to promote but is in highest promotion !");
            cout << "Grade : " << std::flush;
            EXPECTED_EQ(string("Under 1"), string("Over or equal to 1"));
        }
    });

    cout << endl;
    
    TEST(8, "Test wrong degrade", {
        Bureaucrat bureaucrat("bureaucrat", 150);
        try
        {
            cout << BLUE << "Testing degrade when bureaucrat is in lowest grade" << RESET << endl;
            bureaucrat.degrade();
            cout << "Promotion : " << std::flush;
            EXPECTED_EQ(bureaucrat.getGrade(), 151);
        }
        catch(const std::exception& e)
        {
            cout << "Exception catched : " << std::flush;
            EXPECTED_EQ(string(e.what()), "Grade too low or wanted to degrade but is in lowest promotion !");
            cout << "Grade : " << std::flush;
            EXPECTED_EQ(string("Over 150"), string("Under or equal to 150"));
        }
    });

    return 0;
}

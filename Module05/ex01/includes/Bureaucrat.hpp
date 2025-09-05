/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 19:04:57 by cova              #+#    #+#             */
/*   Updated: 2025/09/05 13:19:17 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCREAT_HPP
#define BUREAUCREAT_HPP
#include  <string>
#include  <iostream>
# include "Form.hpp"

class Form;
class Bureaucrat
{
    private: 

        const std::string   _name;
        int                 _grade;
        void                _setGrade(int grade);
    
    public:

        Bureaucrat();
        Bureaucrat(std::string const &name, int grade);
        Bureaucrat(const Bureaucrat &copy);
        ~Bureaucrat();
        Bureaucrat &operator=(Bureaucrat &other);
        std::string const getName() const;
        int getGrade() const;
        void signForm(Form &form);
        void incrementGrade();
        void decrementGrade();

        class GradeTooHighException: public std::exception
        {
            public: 
                virtual const char *what()const throw();
            
        };
        class GradeTooLowException: public std::exception
        {
            public: 
                virtual const char *what()const throw();
        };
};

std::ostream& operator << (std::ostream &os, const Bureaucrat &bure);
#endif
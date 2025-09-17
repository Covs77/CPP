/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 19:04:57 by cova              #+#    #+#             */
/*   Updated: 2025/09/17 12:50:44 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCREAT_HPP
#define BUREAUCREAT_HPP
#include  <string>
#include  <iostream>
# include "AForm.hpp"

class AForm;
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
        void signAForm(AForm &form);
        void executeAForm(AForm const &form); 
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
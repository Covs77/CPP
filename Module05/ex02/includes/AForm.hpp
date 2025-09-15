/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:09:05 by cova              #+#    #+#             */
/*   Updated: 2025/09/15 19:17:58 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
    private:
        const std::string   _name;
        bool                _signed;
        const int           _gradeToSign;
        const int           _gradeToExec;
       
    public:

        AForm();
        virtual ~AForm();
        AForm(Form &other);
        AForm(const std::string &name, int grade, int exec);
        AForm& operator=(const AForm &other);
        std::string getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExec() const;
        
        void beSigned(Bureaucrat &b);
        void execute(Bureaucrat const &executor) const;
        virtual void executeAction() const = 0; // Virtual puro
    
    class GradeTooHighException: public std:: exception
    {
        public:
            virtual const char *what() const throw();
    };
    
    class GradeTooLowException: public std::exception
    {
        public: 
            virtual const char *what() const throw();
    };
};

std::ostream& operator<<(std::ostream& o, const AForm& f);

#endif
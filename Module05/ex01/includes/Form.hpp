/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:09:05 by cova              #+#    #+#             */
/*   Updated: 2025/09/17 12:40:20 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
    private:
        const std::string   _name;
        bool                _signed;
        const int           _gradeToSign;
        const int           _gradeToExec;
       
    public:

        Form();
        ~Form();
        Form(Form &other);
        Form(const std::string &name, int grade, int exec);
        Form& operator=(Form &other);
        std::string getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExec() const;
        void beSigned(Bureaucrat &b);
        
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
std::ostream& operator<<(std::ostream& o, const Form& f);

#endif
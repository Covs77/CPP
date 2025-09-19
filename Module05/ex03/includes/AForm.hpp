/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:09:05 by cova              #+#    #+#             */
/*   Updated: 2025/09/17 12:54:12 by cleguina         ###   ########.fr       */
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
        AForm(const AForm &other);
        AForm(const std::string &name, int grade, int exec);
        AForm& operator=(const AForm &other);
        std::string getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExec() const;
        
        void beSigned(Bureaucrat &b);
        virtual void execute(Bureaucrat const &executor) const = 0;
        
    
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
     class FormNotSignedException: public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
};
std::ostream& operator<<(std::ostream& o, const AForm& f);

#endif
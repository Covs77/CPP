/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:09:05 by cova              #+#    #+#             */
/*   Updated: 2025/09/19 11:48:06 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

#include <iostream>
#include <string>

AForm::AForm():_name("DefaultForm"), _signed(false), _gradeToSign(150), _gradeToExec(150) {};
AForm::~AForm(){
     std::cout << "\033[31;1m" << "Default Gerenic Form Destructor...\n" << "\033[0m";
};
        
AForm::AForm(const AForm &other): _name(other._name), _signed(other._signed), 
_gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec){};

AForm::AForm(const std::string &name, int grade, int exec): _name(name), 
    _signed(false), _gradeToSign(grade), _gradeToExec(exec){};
        
AForm &AForm::operator=(const AForm &other)
{
    if (this != &other)
    {   
        _signed = other._signed;
    }
    return *this;
};

std::string AForm::getName() const
{
    return _name;    
};

bool AForm::getIsSigned() const
{
    return _signed;
};

int AForm::getGradeToSign() const
{
    return _gradeToSign;
};

int AForm::getGradeToExec() const
{
    return _gradeToExec;
};
        
void AForm::beSigned(Bureaucrat &b)
{
    if (b.getGrade() > this->getGradeToSign())
        throw AForm::GradeTooLowException();
    this->_signed = true;

};
    

std::ostream& operator<<(std::ostream& o, const AForm& f)
{

    o << "Form " << f.getName() << " , grade to be signed: " << f.getGradeToSign() 
    << ", grade to exec: " << f.getGradeToExec() 
    << ". Signed Status: " << f.getIsSigned() << std::endl;
    return o;
};



// Definición de what()
const char* AForm::GradeTooHighException::what() const throw() {
    return "Grade too high";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "Grade too low";
}

const char* AForm::FormNotSignedException::what() const throw() {
    return "Form not signed";
}
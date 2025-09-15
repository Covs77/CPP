/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:09:05 by cova              #+#    #+#             */
/*   Updated: 2025/09/15 19:31:49 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

#include <iostream>
#include <string>

AForm::AForm(){};
AForm::~AForm(){};
        
AForm::AForm(const AForm &other): _name(other._name), _signed(other._signed), 
_gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec){};

AForm::AForm(const std::string &name, int grade, int exec): _name(name), 
    _gradeToExec(exec), _gradeToSign(grade), _signed(false){};
        
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
        throw Form::GradeTooLowException();
    this->_signed = true;

};
    

std::ostream& operator<<(std::ostream& o, const AForm& f)
{

    o << "Form " << f.getName() << " , grade to be signed: " << f.getGradeToSign() 
    << ", grade to exec: " << f.getGradeToExec() 
    << ". Signed Status: " << f.getIsSigned() << std::endl;
    return o;
};


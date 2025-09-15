/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:45:16 by cova              #+#    #+#             */
/*   Updated: 2025/09/10 10:03:54 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <string>
#include <iostream>


Form::Form(): _name ("default"), _signed(false), _gradeToSign(150), _gradeToExec(150)
{
    std::cout << "Form Constructor called..." << std::endl;
};

Form::Form(Form &other): _name(other.getName()), _signed(false), _gradeToSign(other.getGradeToSign()), _gradeToExec(other.getGradeToExec())
{
    std::cout << "Form copy constructor called..." << std::endl;
};

Form::Form(const std::string &name, int grade, int exec):_name(name), _signed(false), _gradeToSign(grade), _gradeToExec(exec)
{
    std::cout << "Form param creator...\n" <<  _name << ", with grade to sign: " << _gradeToSign << ", and grade to exec: " << _gradeToExec << std::endl;
    if (_gradeToSign < 1 || _gradeToExec < 1)
    {
        throw Form::GradeTooHighException();
    }
    else if (_gradeToSign >150 || _gradeToExec > 150)
        throw Form::GradeTooHighException();
};

Form::~Form()
{
    std::cout << "\033[33;1m" << "Formulario destruido...\n" << "\033[0m";
}

Form &Form::operator=(Form &other)
{
    if (this != &other)
        this->_signed = other._signed;
    
    return *this;
    
};


std::string  Form::getName() const
{
    return (this->_name);
};

bool Form::getIsSigned() const
{
    return this->_signed;
};

int Form::getGradeToSign() const
{
    return this->_gradeToSign;
};

int Form::getGradeToExec() const
{
    return this->_gradeToExec;
};

void Form::beSigned(Bureaucrat &b)
{
    if (b.getGrade() > this->getGradeToSign())
        throw Form::GradeTooLowException();
    this->_signed = true;
};

std::ostream& operator << (std::ostream &os, const Form &f)
{
    os << "Form " << f.getName() << " , grade to be signed: " << f.getGradeToSign() << ", grade to exec: " << f.getGradeToExec() << ". Signed Status: " << f.getIsSigned() << std::endl;
    return os;
};

/**************** Declaración de excepciones personalizadas ***************/

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
};

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too Low");
};

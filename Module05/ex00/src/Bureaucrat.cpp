/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 19:30:38 by cova              #+#    #+#             */
/*   Updated: 2025/09/05 11:35:17 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

#include <string>
#include <iostream>

void Bureaucrat::_setGrade(int grade) {
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    this->_grade = grade; // no hay excepcion, valor válido.
}
    
Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
    std::cout << "Burócrata construido...\n";    
    
    
};

Bureaucrat::Bureaucrat(std::string const &name, int grade): _name(name)
{
    this->_setGrade(grade);
    std::cout << "Constructor del Burócrata " << this->_name << " con grado " << this->_grade << std::endl;
};

Bureaucrat::Bureaucrat(const Bureaucrat &copy): _name(copy._name), _grade (copy._grade)
{
    std::cout << "Burócrata copiado (new)...\n";    
  
};

Bureaucrat::~Bureaucrat()
{
    std::cout << "\033[33;1m" << "Burócrata destruido..." << "\033[0m" << std::endl;;    
};
        

Bureaucrat &Bureaucrat::operator=(Bureaucrat &other)
{
    std::cout << "Burócrata copiado por parametros...\n";    
    if (this != &other)
    {
        *this = other;
    }
    return *this;
};

std::string const Bureaucrat::getName() const
{
    return(this->_name);
};

int Bureaucrat::getGrade() const
{
    return this->_grade;
};


void Bureaucrat::incrementGrade()
{
    std::cout << "\033[34;1m" << "Incremento... " << "\033[0m" << std::endl;
    if (_grade - 1 < 1)
        throw GradeTooHighException();
    _grade--;   
};
        
void Bureaucrat::decrementGrade()
{
    std::cout << "\033[34;1m" << "Decremento... " << "\033[0m" << std::endl;
    if (_grade +1 > 150)
        throw GradeTooLowException();
    _grade++;    
};

std::ostream& operator << (std::ostream &os, const Bureaucrat &bure)
{
    os << bure.getName() << ", bureaucrat grade " << bure.getGrade();
    return (os);
};

/**************** Declaración de excepciones personalizadas ***************/

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Error: Grade is too high");
};

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Error: Grade is too Low");
};



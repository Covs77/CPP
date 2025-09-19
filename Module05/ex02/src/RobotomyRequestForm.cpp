/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 11:11:04 by cova              #+#    #+#             */
/*   Updated: 2025/09/19 11:48:25 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <string>
#include <iostream>
#include <cstdlib>  


RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "\033[35;1m" << "Default RobotomyRequestForm Constructor...\n" << "\033[0m";
};
    
RobotomyRequestForm::RobotomyRequestForm(const std::string &target): AForm ("RobotomyRequestForm",72, 45), _target(target)
{
    std::cout << "\033[35;1m" << "Param RobotomyRequestForm Constructor...\n" << "\033[0m";
};

RobotomyRequestForm::~RobotomyRequestForm()
{
      std::cout << "\033[31;1m" << "Default RobotomyRequestForm Destructor...\n" << "\033[0m";
};

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if (this != &other)
        *this = other;
    return *this;
};

std::string RobotomyRequestForm::getTarget() const 
{
    return _target;   
};

void RobotomyRequestForm::execute(Bureaucrat const &exec) const
{
    if (!this->getIsSigned())
        throw FormNotSignedException();
    if (exec.getGrade() > this->getGradeToSign())
        throw GradeTooLowException();
    else 
    {
        std::cout << "\033[34;1m" << "*** Brrrrrr Drilling noises ***\n" << "\033[0m";
        if ( std::rand() % 2 == 0)
            std::cout << "\033[32;1m" << this->getTarget() << " has been robotomized successfully\n" << "\033[0m";
       else
            std::cout << "\033[31;1m" << this->getTarget() << " The Robotomy of " << this->getTarget() << " failed\n" << "\033[0m";
       
    }
    
};
    
std::ostream &operator<<(std::ostream &out, RobotomyRequestForm *src)
{
    std::string isSigned = src->getIsSigned() ? " is signed\n" : " is not signed\n";
    
    out << src->getName() << isSigned;
    out << ". Sign-grade: " << src->getGradeToSign();
    out << ", execution grade" << src->getGradeToExec() << std::endl;
    return (out); 



};
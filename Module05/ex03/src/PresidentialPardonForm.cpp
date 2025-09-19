/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:09:05 by cova              #+#    #+#             */
/*   Updated: 2025/09/19 11:41:32 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>
#include <iostream>


    
PresidentialPardonForm::PresidentialPardonForm(const std::string &target): AForm ("PresidentialPardonForm",25,5), _target(target){
    std::cout << "\033[33;1m" << "PresidentialPardonForm Param constructor Called...\n" << "\033[0m";
};

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "\033[31;1m" << "PresidentialPardonForm Destructor Called...\n" << "\033[0m";
};

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    if (this  != &other)
        _target = other._target;
    return *this;
};

std::string PresidentialPardonForm::getTarget() const
{
    return _target;
};

void PresidentialPardonForm::execute (Bureaucrat const &executor) const
{
    if (!this->getIsSigned())
        throw FormNotSignedException();
    if (executor.getGrade() > this->getGradeToExec())
        throw GradeTooLowException();

    std::cout << "\033[33;1m" << this->getTarget() << " has been pardoned by Zaphod Beeblebrox\n" << "\033[0m";
};

/*std::ostream &operator<<(std::ostream &out, PresidentialPardonForm *src)
{
    

}; */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:09:05 by cova              #+#    #+#             */
/*   Updated: 2025/09/17 17:59:38 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>
#include <iostream>


    
PresidentialPardonForm::PresidentialPardonForm(const std::string &target): AForm ("PresidentialPardonForm",25,5), _target(target){
    std::cout << "PresidentialPardonForm Param constructor Called...";
};

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "PresidentialPardonForm Destructor Called...";
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

    std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox\n";
};

/*std::ostream &operator<<(std::ostream &out, PresidentialPardonForm *src)
{
    

}; */
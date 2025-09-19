/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 12:15:24 by cova              #+#    #+#             */
/*   Updated: 2025/09/19 13:42:53 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

#include <string>
#include <iostream>

Intern::Intern()
{
    std::cout  << "\033[32;1m" << "Intern default constructor called ...\n" << "\033[0m";
};

Intern::Intern(Intern const &copy)
{
    *this = copy;
};

Intern::~Intern(){
    std::cout  << "\033[31;1m" << "Intern default constructor called ...\n" << "\033[0m";
};

Intern &Intern::operator=(const Intern &copy)
{
    std::cout  << "\033[32;1m" << "Intern copy assignment operator called ...\n" << "\033[0m";
    if (this != &copy)
        *this = copy;
    return *this;
    
};

enum FormType {PRES, ROBOT, SHRUBB, OTHER};

static FormType resolveForm (std::string const &form)
{
    if (form == "presidential pardon") return PRES;
    if (form == "robotomy request") return ROBOT;
    if (form == "shrubbery creation") return SHRUBB;
    return OTHER;
};

AForm *Intern::makeForm(std::string const &formName, std::string const &target)
{
    switch (resolveForm(formName))
    {
        case PRES:
            std::cout << "Intern creates " << formName << std::endl;
            return new PresidentialPardonForm(target);

        case ROBOT:
            std::cout << "Intern creates " << formName << std::endl;
            return new RobotomyRequestForm(target);

        case SHRUBB:
            std::cout << "Intern creates " << formName << std::endl;
            return new ShrubberyCreationForm(target);

        default:
            std::cout << "Error: Form '" << formName << "' doesn't exist." << std::endl;
            return NULL;
    }
}
 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ShrubberyCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:09:05 by cova              #+#    #+#             */
/*   Updated: 2025/09/17 12:20:40 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"
#include <cstdlib>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145,137), _target(target){
    std::cout << "\033[32;1m" << "Shrubbery Creation Form Called...\n" << "\033[0m";
};
ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout<< "\033[31;1m" << "Shrubbery Destructor Form Called...\n" << "\033[0m";
};



ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (this != &other)
        _target = other._target;
    return *this;
};

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    if (!this->getIsSigned())
        throw FormNotSignedException();
    if (executor.getGrade() > this->getGradeToExec())
        throw GradeTooLowException();

    std::ofstream file((this->getName() + "_shrubbery").c_str());

    file << "🌳 ASCII Árbol 🌳" << std::endl;
}
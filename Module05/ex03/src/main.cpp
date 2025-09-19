/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:40:30 by cova              #+#    #+#             */
/*   Updated: 2025/09/19 13:44:37 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

#include "Intern.hpp"

int main()
{
    std::cout << "\033[32;1m" << "=== Creating Intern ==="  << "\033[0m"  << std::endl;
    AForm *a; AForm *b; AForm *c;

    std::cout << std::endl;

    Intern someRandomIntern;
    std::cout << std::endl;

    std::cout << "\033[32;1m" << "=== Creating PresidentialPardonForm ===" << "\033[0m" << std::endl;
    a = someRandomIntern.makeForm("presidential pardon", "Arthur Dent"); 
    std::cout << std::endl;

    std::cout << "\033[32;1m" << "=== Creating RobotomyRequestForm ===" << "\033[0m" << std::endl;
    b = someRandomIntern.makeForm("robotomy request", "Bender");
    std::cout << std::endl;

    std::cout << "\033[32;1m" << "=== Creating ShrubberyCreationForm ===" << "\033[0m" << std::endl;
    c = someRandomIntern.makeForm("shrubbery creation", "home");
    std::cout << std::endl;

    std::cout << "\033[32;1m" << "=== Trying invalid form ===" << "\033[0m" << std::endl;
    someRandomIntern.makeForm("invalid form", "target");
    std::cout << std::endl;

    std::cout << "\033[32;1m" << "=== Cleaning up ===" << "\033[0m" << std::endl;
    if (a) 
    {
        std::cout << "\033[35;1m" << "Deleting PresidentialPardonForm" << "\033[0m" << std::endl;
        delete a;
    }
    if (b) 
    {
        std::cout << "\033[35;1m" << "Deleting RobotomyRequestForm" << "\033[0m" << std::endl;
        delete b;
    }
    if (c) 
    {
        std::cout << "\033[35;1m" << "Deleting ShrubberyCreationForm" << "\033[0m" << std::endl;
        delete c;
    }

    std::cout << "\033[35;1m" << "\n=== All tests completed! ===" << "\033[0m" << std::endl;
    return (0);
}
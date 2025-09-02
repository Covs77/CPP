/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 19:20:51 by cova              #+#    #+#             */
/*   Updated: 2025/09/01 20:46:53 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
    std::cout << "\n\033[32;1m=== Test 1: Valid constructor === " << "\033[0m\n"  << std::endl;
    try
    {
        Bureaucrat bob("Bob", 75);
        std::cout << bob << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "\n\033[35;1m" << e.what() << "\033[0m"  << std::endl;
    }

    std::cout << "\n\033[32;1m=== Test 2: Grade too high ===" << "\033[0m" << std::endl;
    try
    {
        Bureaucrat alice("Alice", 0);
        std::cout << alice << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "\033[31;1mException caught-> " << e.what() << "\033[0m" << std::endl;
    }

    std::cout << "\n\033[32;1m=== Test 3: Grade too low ===" <<  "\033[0m" << std::endl;
    try
    {
        Bureaucrat charlie("Charlie", 151);
        std::cout << charlie << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "\033[33;1m Exception caught: " << "\033[0m" << e.what() << std::endl;
    }

    std::cout << "\n\033[32;1m=== Test 4: Increment/Decrement ===" << "\033[0m"  << std::endl;
    try
    {
        Bureaucrat dave("Dave", 5);
        std::cout << "Initial: " << dave << std::endl;
        
        dave.incrementGrade();
        std::cout << "\033[34;1m⬆️ After increment: " << "\033[0m"  << dave << std::endl;
        
        dave.decrementGrade();
        std::cout << "\033[34;1m⬇️ After decrement: " << "\033[0m"  << dave << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n\033[32;1m=== Test 5: Increment out of range ===" << "\033[0m" << std::endl;
    try
    {
        Bureaucrat eve("Eve", 1);
        std::cout << "\033[34;1m" << "Initial: " << eve << std::endl;
        eve.incrementGrade();
        std::cout << "\033[34;1m" << "This should not print" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "\033[31;1mException caught: " << e.what() << "\033[0m"  << std::endl;
    }

    std::cout << "\n\033[32;1m=== Test 6: Decrement out of range ===" << "\033[0m" << std::endl;
    try
    {
        Bureaucrat frank("Frank", 150);
        std::cout << "\033[34;1m" << " Initial: " << frank  << "\033[0m" <<std::endl;
        frank.decrementGrade();
        std::cout << "This should not print" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << " \033[34;1m" <<  "Exception caught: " << e.what() << "\033[0m" << std::endl;
    }

    std::cout << "\033[35;1m" << "=== All tests completed! ===" << std::endl;
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:40:30 by cova              #+#    #+#             */
/*   Updated: 2025/09/19 11:42:30 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    std::cout << "\033[32;1m" << "=== Test 1: Valid Bureaucrat creation === " << "\033[0m"<< std::endl;
    try
    {
        Bureaucrat alice("Alice", 30);
        std::cout << "✅ " << alice << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "❌ " << e.what() << std::endl;
    }

    std::cout << "\033[32;1m" << "\n=== Test 2: ShrubberyCreationForm creation ===" << "\033[0m"<< std::endl;
    try
    {
        ShrubberyCreationForm form1("home");
        std::cout << "✅ " << form1 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "❌ " << e.what() << std::endl;
    }
    
    std::cout << "\033[32;1m" << "\n=== Test 3: RobotomyRequestForm creation ===" << "\033[0m" << std::endl;
    try
    {
        RobotomyRequestForm form2("Bender");
        std::cout << "✅ " << form2 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "❌ " << e.what() << std::endl;
    }

    std::cout << "\033[35;1m" << "\n=== Test 4: PresidentialPardonForm creation ===" << "\033[0m" << std::endl;
    try
    {
        PresidentialPardonForm form3("Arthur Dent");
        std::cout << "✅ " << form3 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "❌ " << e.what() << std::endl;
    }
    
    std::cout << "\033[35;1m" << "\n=== Test 5: Successful form signing ===" << "\033[0m" << std::endl;
    try
    {
        Bureaucrat bob("Bob", 20);
        PresidentialPardonForm form4("Ford Prefect");
        
        std::cout << "📋 Before signing: " << form4 << std::endl;
        bob.signAForm(form4);
        std::cout << "✅ After signing: " << form4 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "❌ " << e.what() << std::endl;
    } 
    
	std::cout << "\033[35;1m" << "\n=== Test 6: Failed form signing (grade too low) === ❌" << "\033[0m" << std::endl;
	try
	{
		Bureaucrat charlie("Charlie", 100);
		PresidentialPardonForm form5("Trillian");
		
		std::cout << "📋 Before attempt: " << form5 << std::endl;
		charlie.signAForm(form5);
		std::cout << "📋 After attempt: " << form5 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "❌ " << e.what() << std::endl;
	} 
    
    std::cout << "\033[35;1m" << "\n=== Test 7: Successful ShrubberyCreationForm execution ===" << "\033[0m" << std::endl;
    try
    {
        Bureaucrat alice("Alice", 130);
        ShrubberyCreationForm form6("garden");
        
        std::cout << "📋 Before signing: " << form6 << std::endl;
        alice.signAForm(form6);
        std::cout << "✅ After signing: " << form6 << std::endl;
        
        alice.executeAForm(form6);
    }
    catch (std::exception &e)
    {
        std::cout << "❌ " << e.what() << std::endl;
    }

    std::cout << "\033[35;1m" << "\n=== Test 8: Successful RobotomyRequestForm execution ===" << "\033[0m" << std::endl;
    try
    {
        Bureaucrat dave("Dave", 40);
        RobotomyRequestForm form7("C3PO");
        
        std::cout << "📋 Before signing: " << form7 << std::endl;
        dave.signAForm(form7);
        std::cout << "✅ After signing: " << form7 << std::endl;
        
        dave.executeAForm(form7);
    }
    catch (std::exception &e)
    {
        std::cout << "❌ " << e.what() << std::endl;
    }

   std::cout << "\033[35;1m" << "\n=== Test 9: Successful PresidentialPardonForm execution ===" << "\033[0m" << std::endl;
    try
    {
        Bureaucrat eve("Eve", 1);
        PresidentialPardonForm form8("Marvin");
        
        std::cout << "📋 Before signing: " << form8 << std::endl;
        eve.signAForm(form8);
        std::cout << "✅ After signing: " << form8 << std::endl;
        
        eve.executeAForm(form8);
    }
    catch (std::exception &e)
    {
        std::cout << "❌ " << e.what() << std::endl;
    }
    
    std::cout << "\033[35;1m" << "\n=== Test 10: Execute unsigned form ===" << "\033[0m" << std::endl;
    try
    {
        Bureaucrat frank("Frank", 1);
        ShrubberyCreationForm form9("park");
        
        std::cout << "📋 Form status: " << form9 << std::endl;
        frank.executeAForm(form9);
    }
    catch (std::exception &e)
    {
        std::cout << "❌ " << e.what() << std::endl;
    }
    
	std::cout << "\033[35;1m" << "\n=== Test 11: Multiple robotomy attempts ===" << "\033[0m" << std::endl;
	try
	{
		Bureaucrat ivan("Ivan", 1);
		
		std::cout << "\n--- Attempt 1 ---" << std::endl;
		RobotomyRequestForm form1("Robot1");
		ivan.signAForm(form1);
		ivan.executeAForm(form1);
		
		std::cout << "\n--- Attempt 2 ---" << std::endl;
		RobotomyRequestForm form2("Robot2");
		ivan.signAForm(form2);
		ivan.executeAForm(form2);
		
		std::cout << "\n--- Attempt 3 ---" << std::endl;
		RobotomyRequestForm form3("Robot3");
		ivan.signAForm(form3);
		ivan.executeAForm(form3);
	}
	catch (std::exception &e)
	{
		std::cout << "❌ " << e.what() << std::endl;
	}

    
    std::cout << "\033[34;1m" << "\n=== All tests completed! ===" << "\033[0m" <<std::endl;
    return (0);
}
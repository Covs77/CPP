/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:40:30 by cova              #+#    #+#             */
/*   Updated: 2025/09/10 10:01:52 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    std::cout << "\033[32;1m" << "\n=== Test 1: Valid Bureaucrat creation ===" << "\033[0m" << std::endl;
    try
    {
        Bureaucrat alice("Alice", 30);
        Form f1("formulario_1", 30, 30);
        std::cout << alice << std::endl;
        std::cout << f1<< std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "\033[31;1m" << "Exception catched:" << e.what() << "\033[0m" << std::endl;
    }

    std::cout << "\033[32;1m" << "\n=== Test 2: Valid Form creation ===" << "\033[0m" << std::endl;
    try
    {
        Form form1("Tax Document", 50, 25);
        std::cout << "\033[32;1m" << form1 << "\033[0m" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "\033[31;1m" << "Exception catched:" << e.what() << "\033[0m" << std::endl;
    }

    std::cout << "\033[32;1m" << "\n=== Test 3: Form with grade too high ===" << std::endl;
    try
    {
        Form form2("Invalid Form", 0, 25);
        std::cout << form2 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "\033[31;1m" << "Exception catched:" << e.what() << "\033[0m" << std::endl;
    }

    std::cout << "\033[32;1m" << "\n=== Test 4: Form with grade too low ===" << "\033[0m" << std::endl;
    try
    {
        Form form3("Invalid Form", 50, 151);
        std::cout << form3 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "\033[31;1m" << "Exception catched:" << e.what() << "\033[0m" << std::endl;
    }

    std::cout << "\033[32;1m" << "\n=== Test 5: Successful form signing ===" << "\033[0m" << std::endl;
    try
    {
        Bureaucrat bob("Bob", 20);
        Form form4("License", 50, 25);
        
        std::cout << "\033[34;1m" <<  "Before signing: \n" << form4 << std::endl;
        bob.signForm(form4);
        std::cout << "\033[34;1m" <<  "After signing: \n" << form4 << "\033[0m" <<  std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "\033[31;1m" << "Exception catched:" << e.what() << "\033[0m" << std::endl;
    }

    std::cout << "\033[32;1m" << "\n=== Test 6: Failed form signing (grade too low) ===" << "\033[0m" << std::endl;
    try
    {
        Bureaucrat charlie("Charlie", 100);
        Form form5("Top Secret", 10, 5);
        
        std::cout << "\033[34;1m" << "Before signing: " << form5 << "\033[0m" << std::endl;
        charlie.signForm(form5);
        std::cout << "\033[34;1m" << "After signing: " << form5 << "\033[0m" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "\033[31;1m" << "Exception catched:" << e.what() << "\033[0m" << std::endl;
    }

    std::cout << "\033[35;1m" << "\n=== All tests completed! ===" << "\033[0m" << std::endl;
    return (0);
}
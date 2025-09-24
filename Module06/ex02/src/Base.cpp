/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:25:09 by anttorre          #+#    #+#             */
/*   Updated: 2025/09/24 13:41:23 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>

Base::~Base(){};

Base *generate(void)
{
    Base *b = NULL;
   
    int i = rand() % 3;
    switch (i)
    {
    case 0:
        return (b = new A());   
    case 1:
        return (b = new B());
    case 2:
        return (b = new C());
    }
    return NULL;
};

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "Pointer Type A\n";
    else if (dynamic_cast<B*>(p))
        std::cout << "Pointer Type B\n";
    else if (dynamic_cast<C*>(p))
        std::cout << "Pointer Type C\n";
    else 
        std::cout << "\033[31;1mUnknown class type....\n\033[0m";
};

void identify(Base& p)
{
    try
    {
        (void)(dynamic_cast<A&>(p));
        std::cout << "Ref Type class A\n";
    }
    catch (std::exception&)
    {
        try
        {
            (void)(dynamic_cast<B&>(p));
            std::cout << "Ref Type class B\n";
        }
        catch (std::exception&)
        {
            try
            {
                (void)(dynamic_cast<C&>(p));        
                std::cout << "Ref Type class C\n";
            }
            catch (std::exception&)
            {
                std::cout << "\033[31;1mException: Unknown ref type\n\033[0m";
            }
        }
    }
}

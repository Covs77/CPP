/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:25:09 by anttorre          #+#    #+#             */
/*   Updated: 2025/09/23 18:48:21 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>

Base::Base(){};

Base::~Base(){};
std::string Base::getType() const
{
    return "Base";
};

Base *generate(void)
{
    Base *b = NULL;
    srand(time(0));
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
        std::cout << "Type class A\n";
    else if (dynamic_cast<B*>(p))
        std::cout << "Type class B\n";
    else if (dynamic_cast<C*>(p))
        std::cout << "Typer class C\n";
    else 
        std::cout << "Typer class Unknown\n";
};

void identify(Base& p)
{
    try
    {
        (void)(dynamic_cast<A&>(p));
        std::cout << "Type class A\n";
    }
    catch (std::exception&)
    {
        try
        {
            (void)(dynamic_cast<B&>(p));
            std::cout << "Type class B\n";
        }
        catch (std::exception&)
        {
            try
            {
                (void)(dynamic_cast<C&>(p));        
                std::cout << "Typer class C\n";
            }
            catch (std::exception&)
            {
                std::cout << "Unknown type\n";
            }
        }
    }
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 13:34:25 by cova              #+#    #+#             */
/*   Updated: 2025/09/03 13:30:21 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"  
#include "Brain.hpp"  


Cat::Cat(): Animal()
{
    std::cout << "Cat default constructor called...\n";
    _type = "Cat";
    this->brain = new Brain();
};
        

Cat::~Cat()
{
    delete(brain);
    std::cout << "Cat destructor called...\n";
}

Cat::Cat(const Cat &other): Animal (other)
{
    std::cout << "Cat copy constructor called...\n";
    *this = other;
}

Cat &Cat::operator=(Cat const &other)
{
    std::cout << "Cat assignment operator called...\n";
    if (this != &other)
    {
        Animal::operator=(other);
    }    
    return (*this);
};

void Cat::makeSound() const 
{
    std::cout << "Cat Makes: Miau!\n";
};

Brain *Cat::getBrain()
{
 return brain;   
};
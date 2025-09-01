/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 16:46:14 by cova              #+#    #+#             */
/*   Updated: 2025/09/01 16:59:02 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor called...\n";    
};

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called...\n";    
};

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout << "WrongAnimal copy constructor called...\n";    
    *this = other;
};


WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout << "WrongAnimal assignmente operator called...\n";    
    if (this != &other)
        this->_type = other._type;
    return *this;
}

std::string WrongAnimal::getType() const
{
    return (this->_type);
}; 


void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal makes wrong sounds\n";    
};
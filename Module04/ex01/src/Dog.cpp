/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 14:20:46 by cova              #+#    #+#             */
/*   Updated: 2025/09/01 18:03:21 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

#include  "Animal.hpp"


Dog::Dog()
{
    std::cout << "Dog default constructor called...\n";
    this->_type = "Dog";
    this->brain = new Brain();
};

Dog::~Dog()
{
    delete(brain);
    std::cout << "Dog default destructor called...\n";
};

Dog::Dog(const Dog &other): Animal(other)
{
    std::cout << "Dog copy destructor called...\n";
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog operator assignment called...\n";
    if (this != &other)
        Animal::operator=(other);
    return(*this);
}

void Dog::makeSound() const
{
    std::cout << "Dog makes: Guau!\n";
}

Brain *Dog::getBrain()
{
 return brain;   
};
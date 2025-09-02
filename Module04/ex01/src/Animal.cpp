/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 14:05:06 by cova              #+#    #+#             */
/*   Updated: 2025/09/02 20:02:44 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Animal.hpp"


Animal::Animal()
{
    std::cout << "Animal default constructor called...\n";
};

Animal::~Animal()
{
    std::cout << "Animal default destructor called...\n";
};

Animal::Animal(const Animal &other)
{
    std::cout << "Animal copy destructor called...\n";
    *this = other;
}

Animal &Animal::operator=(const Animal &other)
{
    std::cout << "Animal operator assignment called...\n";
    if (this != &other)
        this->_type = other.getType();
    return(*this);
}

std::string Animal::getType() const
{
    if (this->_type == "")
        return ("generic animal type");
    return (this->_type);
}

void Animal::setType(std::string const type)
{
    this->_type = type;
}


void Animal::makeSound() const
{
    std::cout << "A generic animal type makes an undefined sound\n";
} 
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 14:05:06 by cova              #+#    #+#             */
/*   Updated: 2025/08/28 14:07:15 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Animal.hpp"
#include <string>
#include <iostream>

Animal::Animal()
{
    std::cout << "Animal default constructor called...\n";
};

Animal::~Animal()
{
    std::cout << "Animal default destructor called...\n";
};

        Animal(std::string type);
        Animal(const Animal &other);        
        makeSound();
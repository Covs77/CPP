/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 17:13:48 by cova              #+#    #+#             */
/*   Updated: 2025/09/01 18:06:08 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
   
   
Brain::Brain()
{
    std::cout << "Brain default constructor called ...\n";    
};

Brain::~Brain()
{
    std::cout << "Brain default destructor called...\n";    
}

Brain::Brain(Brain &other)
{
    std::cout << "Brain copy contructor called...\n";    
    *this=other;
};
        

Brain &Brain::operator=(Brain &other)
{
    std::cout << "Brain assignment operator called...\n";    
    if (this != &other)
    {
        for (int i = 0; i<=100; i++)
            this->ideas[i] = other.ideas[i];
    }
    return (*this);
};
        

std::string *Brain::getIdeas(int index)
{
    if (index > 0 || index <= 100)
        return (&ideas[index]);
    return NULL;
}

void Brain::setIdeas(int index, std::string idea)
{
    if (index > 0 || index <= 100)
        this->ideas[index] = idea;
    return;
};
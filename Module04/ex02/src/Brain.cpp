/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 17:13:48 by cova              #+#    #+#             */
/*   Updated: 2025/09/02 11:16:31 by cleguina         ###   ########.fr       */
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
    if (index < 0 || index >= 100)
        return NULL;
    return (&ideas[index]);
}

void Brain::setIdeas(int index, std::string idea)
{
    if (index < 0 || index >= 100)
        return;
    this->ideas[index] = idea;
};
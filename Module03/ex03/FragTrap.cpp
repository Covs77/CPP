/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 12:21:33 by cova              #+#    #+#             */
/*   Updated: 2025/08/28 12:45:26 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->_name = "DefaultFragTrapName";
    this->_attackDamage = 30;
    this->_energyPoints = 100;
    this->_hitPoints = 100;
    std::cout << "FragTrap default constructor" << std::endl; 
};

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    std::cout << "FragTrap copy constructor called" << std::endl; 
};

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_attackDamage = 30;
    this->_energyPoints = 100;
    this->_hitPoints = 100;
    std::cout << "FragTrap Parameter constructor called" << std::endl; 
    
};

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl; 
};
        
FragTrap& FragTrap::operator=(const FragTrap &other)
{
    std::cout << "FragTrap Assignment Operator called" << std::endl; 
    if (this != &other)
        ClapTrap::operator=(other);
    
    return (*this);
};

void FragTrap::highFiveGuys()
{
    std::cout << "FragTrap " << this->_name << " 🤚 request " << std::endl; 
}

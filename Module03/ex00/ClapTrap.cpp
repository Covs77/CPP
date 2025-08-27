/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 12:43:12 by cova              #+#    #+#             */
/*   Updated: 2025/08/27 13:30:54 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

 ClapTrap::ClapTrap() : _hitPoints(10), _energyPoints(10), _attackDamage(0)
 {
    std::cout << "ClapTrap default constructor called by " << _name << std::endl;
 }
        
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called by " << this->_name << std::endl;
};

ClapTrap::ClapTrap(std::string name): _name(name),_hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap parameter constructor called by " << this->_name << std::endl;
};

ClapTrap::ClapTrap(ClapTrap &copy){
    
    std::cout << "ClapTrap copy constructor called by " << this->_name << std::endl;
    *this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    std::cout << "ClapTrap copy assignment operator called by " << this->_name << std::endl;
    if (this != &copy)
    {
        this->_name = copy._name;
        this->_attackDamage = copy._attackDamage;
        this->_hitPoints = copy._hitPoints;
        this-> _energyPoints = copy._energyPoints;
    }    
    return (*this);
}


void ClapTrap::attack(const std::string& target)
{
    if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " Can´t attack! No energy points or hit points left to attack." << std::endl;
    }
    this->_energyPoints -= 1;
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    
};

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
        return;
    }
    this->_hitPoints -= amount;
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " Can´t be repaired! No energy points or hit points left to repair." << std::endl;
    }
    this->_hitPoints += amount;
    this->_energyPoints -= 1;
    std::cout << "ClapTrap " << this->_name << " is repaired for " << amount << " hit points!" << std::endl;
    
};

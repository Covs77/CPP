/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 14:00:56 by cova              #+#    #+#             */
/*   Updated: 2025/08/28 12:04:26 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

 ScavTrap::ScavTrap()
 {
    std::cout << " ScavTrap Default constructor called by <noname>" << std::endl;    
 }

 ScavTrap::ScavTrap(std::string name)
 {
        std::cout << "ScavTrap Parametric constructor called by " << name << std::endl;
        this->_name = name;
        this->_attackDamage = 20;
        this->_hitPoints = 100;
        this->_energyPoints = 50;
 }

 ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
 {
    std::cout << "ScavTrap copy constructor called by " << this->_name << std::endl;    
 };

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called by " << this->_name << std::endl;    
};

ScavTrap& ScavTrap::operator=(ScavTrap &other)
{
    std::cout << "ScavTrap Operator Asignament called by " << this->_name << std::endl;

    if (this != &other)
    {
        this->_name = other._name;
        this->_attackDamage = other._attackDamage;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
    }
    return *this;
};

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " is now in Gate Keeper mode." << std::endl;    
};
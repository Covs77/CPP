/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 09:57:26 by cova              #+#    #+#             */
/*   Updated: 2025/08/05 10:30:03 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(void){} // constructor

Zombie::~Zombie() // Destructor
{
    std::cout << "Zombie " << _name << " is dead." << std::endl;
}

Zombie::Zombie(std::string name)
{
    _name = name;
}

void Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}







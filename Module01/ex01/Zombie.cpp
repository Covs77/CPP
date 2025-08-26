/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 11:57:25 by cova              #+#    #+#             */
/*   Updated: 2025/08/26 12:20:48 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){} // Constructor

Zombie::~Zombie() // Destructor
{ std::cout << "Zombie " << _name << " is dead." << std::endl; }

void Zombie::setName(std::string name)
{      _name = name; }

void Zombie::announce(void)
{ std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl; }


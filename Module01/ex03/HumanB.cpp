/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 13:58:01 by cova              #+#    #+#             */
/*   Updated: 2025/08/05 14:23:08 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : 
    _name ( name ), _weapon (NULL) {}

HumanB::~HumanB(void){}


void HumanB::setWeapon(Weapon& weapon) {
    _weapon = &weapon;
}

void HumanB::attack(void){
    if (!_weapon || _weapon->getType().empty())
        std::cout << _name << " has no weapon to attack with!" << std::endl;
    else 
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

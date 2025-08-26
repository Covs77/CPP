/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 13:58:01 by cova              #+#    #+#             */
/*   Updated: 2025/08/26 12:49:23 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : 
    _name ( name ), _weapon (NULL) {}

HumanB::~HumanB(void){
    std::cout << "Destructor HumanB called" << std::endl;
}


void HumanB::setWeapon(Weapon& weapon) {
    _weapon = &weapon;
}

void HumanB::attack(void){
    if (!_weapon || _weapon->getType().empty())
        std::cout << _name << " has no weapon to attack with!" << std::endl;
    else 
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

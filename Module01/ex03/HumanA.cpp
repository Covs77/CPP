/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 13:45:03 by cova              #+#    #+#             */
/*   Updated: 2025/08/26 12:49:10 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : 
    _name ( name ), _weapon (weapon) {}

HumanA::~HumanA(void){
    std::cout << "Destructor HumanA called" << std::endl;
}
    
void HumanA::attack(void){
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

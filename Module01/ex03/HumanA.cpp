/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 13:45:03 by cova              #+#    #+#             */
/*   Updated: 2025/08/05 14:24:33 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : 
    _name ( name ), _weapon (weapon) {}

HumanA::~HumanA(void){}
    
void HumanA::attack(void){
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

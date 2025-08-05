/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 13:24:52 by cova              #+#    #+#             */
/*   Updated: 2025/08/05 14:11:38 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string type): _type(type){}

Weapon::~Weapon(void){}

const std::string& Weapon::getType( void ){
	return (_type);
}
void Weapon::setType(std::string newType){
	_type = newType;
}
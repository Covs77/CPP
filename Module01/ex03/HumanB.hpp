/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 13:57:19 by cova              #+#    #+#             */
/*   Updated: 2025/08/05 14:20:37 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
#define HUMANB_HPP

#pragma once
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon* _weapon;

    public:
        HumanB(std::string name);
        ~HumanB( void );
        
        void setWeapon(Weapon &weapon);
        void attack(void);
};

#endif
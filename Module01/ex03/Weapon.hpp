/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 13:37:12 by cova              #+#    #+#             */
/*   Updated: 2025/08/05 14:16:17 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>
#include <iostream>
#include <cstdio>

class Weapon
{

	private:
		std::string _type;

    public:
        Weapon(std::string type );
        ~Weapon(void);
		const std::string& getType( void ); 
		void setType(std::string newType);
};
#endif

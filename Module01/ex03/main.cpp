/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 13:48:42 by cova              #+#    #+#             */
/*   Updated: 2025/08/26 12:51:14 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("Gun");
		
		HumanA	bob("Bob", club);
		bob.attack();
		club.setType("Knife");
		bob.attack();
	}
	{
		Weapon	club = Weapon("hammer");

		HumanB	jim("jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("");
		jim.attack();
	}
	return 0;
}
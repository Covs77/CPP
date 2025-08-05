/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 10:13:40 by cova              #+#    #+#             */
/*   Updated: 2025/08/05 11:49:48 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    Zombie z1("StackZombie");
    Zombie *z2 = newZombie("HeapZombie");
    z1.announce();
    z2->announce();
    randomChump("RandomZombie");
    delete z2;
    return 0;
}
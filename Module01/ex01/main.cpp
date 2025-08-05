/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 11:57:12 by cova              #+#    #+#             */
/*   Updated: 2025/08/05 12:44:05 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    int const N = 2;
    Zombie *zombies = zombieHorde(N, "ZombieHorde");
    for (int i = 0; i < N; i++)
        zombies[i].announce();
    delete[] zombies;
    return 0;
}
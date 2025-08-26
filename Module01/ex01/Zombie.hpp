/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 11:58:10 by cova              #+#    #+#             */
/*   Updated: 2025/08/26 12:19:21 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>


class Zombie
{
    private:
        std::string _name;

    public:
        
        Zombie(void);
        ~Zombie();
        void announce(void);
        void setName( std::string name );
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif

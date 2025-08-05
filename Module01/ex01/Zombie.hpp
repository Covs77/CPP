/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 11:58:10 by cova              #+#    #+#             */
/*   Updated: 2025/08/05 12:41:24 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cstdio>

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

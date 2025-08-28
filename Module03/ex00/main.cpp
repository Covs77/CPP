/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 12:48:32 by cova              #+#    #+#             */
/*   Updated: 2025/08/28 12:44:57 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main(void)
{
    std::cout << "\033[32;1m--- CONSTRUCTORS ---" << "\033[0m" << std::endl;
    ClapTrap defaultClap;
    ClapTrap clap1("Robin");
    ClapTrap clap2("WonderWoman");
    ClapTrap clap3(clap1);
    
    std::cout << "\033[32;1m--- ASSIGNMENT OPERATOR ---" << "\033[0m" << std::endl;
    ClapTrap clap4;
    clap4 = clap2;
    
    std::cout << "\033[32;1m--- NORMAL ATTACK ---" << "\033[0m" << std::endl;
    clap1.attack("Batman");
    clap2.attack("Spiderman");
    
    std::cout << "\033[32;1m--- TAKE DAMAGE ---" << "\033[0m" << std::endl;
    clap1.takeDamage(3);
    clap2.takeDamage(5);
    
    std::cout << "\033[32;1m--- REPAIR ---" << "\033[0m"<< std::endl;
    clap1.beRepaired(2);
    clap2.beRepaired(3);
    
    std::cout << "\033[32;1m--- WITHOUT HIT POINTS ---" << "\033[0m" << std::endl;
    clap4.takeDamage(10);
    clap4.attack("Enemy");
    clap4.beRepaired(5);
    clap4.takeDamage(5);
    
    std::cout << "\033[32;1m--- DESTRUCTORSSS ---" << "\033[0m"<< std::endl;
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 12:48:32 by cova              #+#    #+#             */
/*   Updated: 2025/08/27 14:13:21 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main(void)
{
    using namespace std;
    ClapTrap defaultClap;
    ClapTrap clap1("Robin");
    ClapTrap clap2("WonderWoman");
    ClapTrap clap3(clap1);
    
    cout << "\033[32;1m--- ASSIGNMENT OPERATOR ---" << "\033[0m" << endl;
    ClapTrap clap4;
    clap4 = clap2;
    
    cout << "\033[32;1m--- NORMAL ATTACK ---" << "\033[0m" << endl;
    clap1.attack("Batman");
    clap2.attack("Spiderman");
    
    cout << "\033[32;1m--- TAKE DAMAGE ---" << "\033[0m" << endl;
    clap1.takeDamage(3);
    clap2.takeDamage(5);
    
    cout << "\033[32;1m--- REPAIR ---" << "\033[0m"<< endl;
    clap1.beRepaired(2);
    clap2.beRepaired(3);
    
    cout << "\033[32;1m--- WITHOUT HIT POINTS ---" << "\033[0m" << endl;
    clap4.takeDamage(10);
    clap4.attack("Enemy");
    clap4.beRepaired(5);
    clap4.takeDamage(5);
    
    cout << "\033[32;1m--- DESTRUCTORSSS ---" << "\033[0m"<< endl;
    return (0);
}
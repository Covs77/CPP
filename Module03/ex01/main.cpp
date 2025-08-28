/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 12:48:32 by cova              #+#    #+#             */
/*   Updated: 2025/08/28 12:44:39 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int main(void)
{
   std::cout << "\033[32;1m--- CONSTRUCTORS ---" << "\033[0m" << std::endl;
    ClapTrap clap("CL4P-TP");
    ScavTrap firstRobot;
    ScavTrap secondRobot("Scav3000");
    ScavTrap thirdRobot(secondRobot);
    
    std::cout << "\033[32;1m--- ATTACKS ---" << "\033[0m" << std::endl;
    clap.attack("Bandit");
    firstRobot.attack("invasors");
    secondRobot.attack("monsters");
	thirdRobot.attack("traitors");
    
    std::cout << "\033[32;1m--- TAKING DAMAGE ---" << "\033[0m" << std::endl;
    clap.takeDamage(3);
    firstRobot.takeDamage(9);
    secondRobot.takeDamage(78);
	thirdRobot.takeDamage(25);
    
    std::cout << "\033[32;1m--- REPAIR ---" << "\033[0m" << std::endl;
    clap.beRepaired(2);
    firstRobot.beRepaired(5);
    secondRobot.beRepaired(89);
	thirdRobot.beRepaired(15);
    
    std::cout << "\033[32;1m--- GUARD GATE ---\033[0m" << std::endl;
    firstRobot.guardGate();
    secondRobot.guardGate();
	thirdRobot.guardGate();
    
    std::cout << "\033[32;1m--- WITHOUT HIT POINTS ---\033[0m" << std::endl;
    firstRobot.takeDamage(100);
    firstRobot.attack("traitors");
    firstRobot.beRepaired(50);
    firstRobot.takeDamage(5);
    firstRobot.guardGate();

    std::cout << "\033[32;1m--- DESTRUCTORS ---\033[0m" << std::endl;
    return (0);
}
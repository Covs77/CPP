/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 12:48:32 by cova              #+#    #+#             */
/*   Updated: 2025/08/28 13:39:34 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "DiamondTrap.hpp"

int main(void)
{
    std::cout << "\033[32;1m---- DEFAULT DIAMONDTRAP ---" << "\033[0m" << std::endl;
    DiamondTrap diamond;

    diamond.whoAmI();
    diamond.attack("citizens");
    diamond.takeDamage(90);
    diamond.beRepaired(10);
    diamond.guardGate();
    diamond.highFiveGuys();
    diamond.takeDamage(40);
    diamond.attack("citizens");
    
    std::cout << "\033[32;1m---- SPECIFIC DIAMONDTRAP ---" << "\033[0m" << std::endl;
    DiamondTrap secondDiamond("Troll");
    
    secondDiamond.whoAmI();
    secondDiamond.attack("citizens");
    secondDiamond.takeDamage(18);
    secondDiamond.beRepaired(153);
    secondDiamond.guardGate();
    secondDiamond.highFiveGuys();
    secondDiamond.takeDamage(240);
    secondDiamond.attack("citizens");
    
    std::cout << "\033[32;1m--- COPY DIAMONDTRAP ---" << "\033[0m" << std::endl;
    DiamondTrap thirdDiamond(secondDiamond);
    
    thirdDiamond.whoAmI();
    thirdDiamond.attack("citizens");
    
    std::cout << std::endl << "\033[32;1m--- DESTRUCTORS ---" << "\033[0m" << std::endl;
    return 0;
}
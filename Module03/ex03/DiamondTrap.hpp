/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 13:03:31 by cova              #+#    #+#             */
/*   Updated: 2025/08/28 17:46:23 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

#include <string>

class DiamondTrap : public ScavTrap, public FragTrap
{
    private: 
        std::string _name;
    
    public: 
        DiamondTrap ();
        ~DiamondTrap();
        DiamondTrap (std::string name);
        DiamondTrap(const DiamondTrap &other);
        using ScavTrap::attack;
        DiamondTrap &operator=(const DiamondTrap &other);
        void whoAmI(void);
};

#endif
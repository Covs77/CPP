/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 19:28:28 by cova              #+#    #+#             */
/*   Updated: 2025/08/11 14:05:23 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"     
     
Harl::Harl() {}

Harl::~Harl() {
    std::cout << WHITE << BG_RED << "Harl destructor called" << RST <<  std::endl;
}

void Harl::debug()
{
    std::cout << CYAN <<("[DEBUG]: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!") \
        << RST << std::endl;
}

void Harl::info(){
    std::cout << WHITE << ("[INFO]: I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!") \
        << RST  << std::endl << std::endl;
}
void Harl::warning(){
    std::cout << YELLOW << ("[WARNING]: I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month.") \
        << RST << std::endl;
}
void Harl::error(){
    std::cout << RED << ("[ERROR]: This is unacceptable! I want to speak to the manager now.") \
    << RST << std::endl;
}

void Harl::complain(std::string level)
{
    std::string levels[4] = {"debug", "info", "warning", "error"};
    void (Harl::*funcs[])() = {&Harl::debug,&Harl::info, &Harl::warning, &Harl::error};
    
    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            (this->*funcs[i])();
            return ;
        }
    }
    std::cout << RED << "Unknown level: " << level << std::endl;
}

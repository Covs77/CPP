/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 19:28:28 by cova              #+#    #+#             */
/*   Updated: 2025/08/11 18:57:21 by cova             ###   ########.fr       */
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
        << RST  << std::endl;
}
void Harl::warning(){
    std::cout << YELLOW << ("[WARNING]: I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month.") \
        << RST << std::endl;
}
void Harl::error(){
    std::cout << RED << ("[ERROR]: This is unacceptable! I want to speak to the manager now.") \
    << RST << std::endl;
}

/******************************************************************************/
/*       			Assign an integer value to each log level  		          */
/******************************************************************************/

int levelToInt (std::string level)
{
    std::string levels[4] = {"debug", "info", "warning", "error"};
    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            return (i);
        }
    }
    return (-1);
}

/******************************************************************************/
/*       						Print Error Message					          */
/******************************************************************************/

void printError (std::string msg)
{
	std::cout << RED << "Error: " << msg << RST << std::endl;
	
}

/******************************************************************************/
/*       						Use Switch  (instead of an If)			      */
/******************************************************************************/


void Harl::complain(std::string level)
{
    
    int i = levelToInt(level);
    switch (i)
    {
        case 0:
        {
            this->debug();
            this->info();
            this->warning();
            this->error();
         	std::cout << std::endl;
            break;
        }
        case 1:
        {
            this->info();
            this->warning();
            this->error();
         	std::cout << std::endl;
            break;
        }
        case 2:
        {
            this->warning();
            this->error();
            std::cout << std::endl;
            break;
        }
        case 3:
        {
            this->error();
            std::cout << std::endl;
            break;
        }
        
        default:
            printError("Error: Write a correct level: DEBUG | INFO | WARNING | ERROR");
    }
}

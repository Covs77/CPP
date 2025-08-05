/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:45:33 by cova              #+#    #+#             */
/*   Updated: 2025/08/05 13:07:59 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>

int main ()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    
    std::cout << "STRING  address:" << std::setw(20) <<  std::right << &str << std::endl;
    std::cout << "&strPTR address:" << std::setw(20) <<  std::right << stringPTR << std::endl;
    std::cout << "strREF  address:" << std::setw(20) <<  std::right  << &stringREF << std::endl;
    
    std::cout << "StringSTR value:" << std::setw(20) <<  std::right <<str << std::endl;
    std::cout << "StringPTR value:" << std::setw(20) << std::right << *stringPTR << std::endl;
    std::cout << "StringREF value:" << std::setw(20) <<  std::right << stringREF << std::endl;
    return (0);
}
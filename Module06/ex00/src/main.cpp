/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 12:40:46 by cova              #+#    #+#             */
/*   Updated: 2025/09/22 10:22:51 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <string>

int main(int argc , char **argv)
{
    if (argc!= 2)
    {
        std::cout << "\033[031;1m Usage ->   " << argv[0] << " [literal number or char]\n\033[0m";
        return 1;
    }
    ScalarConverter::convert(argv[1]);
    return 0;
}
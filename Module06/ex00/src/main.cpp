/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 12:40:46 by cova              #+#    #+#             */
/*   Updated: 2025/09/21 12:57:51 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <string>

int main(int argc , char **argv)
{
    if (argc!= 2)
    {
        std::cout << "Usage   " << argv[0] << "literal number or char.\n";
        return 1;
    }
    ScalarConverter::convert(argv[1]);
    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 12:32:36 by cova              #+#    #+#             */
/*   Updated: 2025/09/21 12:55:09 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <string>


ScalarConverter::ScalarConverter()
{
    std::cout << "\033[2;34m[ScalarConverter] Default constructor called...\n\033[0m";
};

ScalarConverter::~ScalarConverter()
{
    std::cout << "\033[2;34m[ScalarConverter] Default destructor called...\n\033[0m";
};

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    std::cout << "[ScalarConverter] Copy constructor called...\n";
    *this = other;
};
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy)
{
    (void)copy;
    std::cout << "[ScalarConverter] Operator called...\n";
    return *this;
};
        

void ScalarConverter::convert(std::string const &convert)
{
    
};

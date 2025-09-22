/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 12:27:55 by cova              #+#    #+#             */
/*   Updated: 2025/09/22 13:10:38 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <string>
# include <iostream>
# include <cstring>
# include <climits>
# include <cstdlib>
# include <cstdio>

enum types
{
	INT,
	CHAR,
	FLOAT,
	DOUBLE,
	SPCF,
	SPC,
};
class ScalarConverter
{
    private: 
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter &other);
        ScalarConverter &operator=(const ScalarConverter &copy);
    public:     
        static void convert(std::string const &conver);
        
};
#endif
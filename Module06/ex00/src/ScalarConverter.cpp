/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 12:32:36 by cova              #+#    #+#             */
/*   Updated: 2025/09/22 13:24:17 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <string>
#include <cctype>


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

bool overFlow(std::string s)
{
    if (atol(s.c_str()) > INT_MAX || atol(s.c_str()) < INT_MIN)
    {   
        std::cout << "int: Overflow value\n";
        std::cout << "float: Overflow value\n";
        std::cout << "double: Overflow value\n";
        exit(0);
    }
 return false;
}
        
void typePseudo(const std::string input)
{
    std::cout << "Char: impossible\n";
    std::cout << "int: impossible\n";
    if (input == "nanf" || input == "+inff" || input =="-inff")
        std::cout << "float: " << input <<std::endl;
    else 
        std::cout << "float: " << input << "f" <<std::endl; 
    std::cout << "double: " << input << std::endl; 
    
};

void typePseudoF(const std::string input)
{
    std::cout << "Char: impossible\n";
    std::cout << "int: impossible\n";
    if (input == "nanf" || input == "+inff" || input =="-inff")
        std::cout << "float: " << input <<std::endl;
    else 
        std::cout << "float: " << input << "f" <<std::endl; 
    std::cout << "double: " << input.substr(0, input.length() - 1) << "\n";
};

void typeChar(const char c)
{
    int num = static_cast <int> (c);
    float f = static_cast <float>(c);
    double d = static_cast <double> (c);
    std::cout << "Char: '" << c << "'"<< std::endl;
    std::cout << "Int: " << num << std::endl;
    std::cout << "Float: " << f << ".0f" << std::endl;
    std::cout << "Double: " << d << ".0" << std::endl;
}

bool esNumerico2(const std::string &s) {
    return !s.empty() && s.find_first_not_of("0123456789") == std::string::npos;
}


void typeInt(std::string input)
{
    int i = atoi(input.c_str());
    std::cout << "Char: ";
    if (isprint(static_cast<char>(i)) < 255 && isprint(static_cast<char>(i)) > 0)
        std::cout << "'"<< static_cast<char>(i) << "'\n"; 
    else
        std::cout << "Non displayable" << std::endl;
    if (!overFlow(input))
    {
        std::cout << "Int: " << i << std::endl;
        std::cout << "Float: " << static_cast<float>(i) << ".0f\n";
        std::cout << "Double: " << static_cast<double>(i) << ".0\n";
    }
}


int getType(const std::string s)
{
    char *endstr; 
    if(s == "nan" || s== "-inf" || s == "+inf")
        return SPC;
    if (s== "nanf" || s == "-inff" || s == "+inff")
        return SPCF;
    if (s == "-nan" || s == "+nan")
        return -1;
    if (s == "inf")
        return INT;
    if (s.length() == 1 && (std::isalpha(s[0])) && (std::isprint(s[0])))
        return CHAR;
    strtol(s.c_str(), &endstr, 10);
    if (endstr[0] =='\0')
        return INT;
    strtod(s.c_str(), &endstr);
    if (endstr[0] == 'F' || endstr[0] == 'f')
        return FLOAT;
    else if (endstr[0] == '\0')
        return DOUBLE;
    return -1;
}

/****** COMPROBAMOS SI EL NUMERO TIENE DECIMALES O NO ******/

bool isround(float n){
    int i = static_cast<int>(n);
    if(n == i)
        return true;
    return false;
}



void typeFloat(std::string s)
{
    float f;
    f = atof (s.c_str());
    std::cout << "char: ";
    if (isround(f) && isprint(static_cast<char>(f)))
        std::cout << "'" << static_cast<char>(f) << "\n";
    else 
      std::cout << "Non displayable" << std::endl;
    if (!overFlow(s))
        std::cout << "int: " << static_cast<int>(f) << "\n";
    std::cout << "float: " << f;
    if (isround(f))
        std::cout << ".0f\n";
    else
        std::cout << "f\n";
    std::cout << "double: " << static_cast<float>(f);
    if (isround(f))
        std::cout << ".0\n";
    else 
        std::cout << "\n";
};


void typeDouble(std::string s)
{
    double d;
    d = atof(s.c_str());
    std::cout << "char :";
    if (isround(d) && isprint(static_cast<char>(d)))
        std::cout << "'" << static_cast<char>(d) << "'\n";
    else 
        std::cout << "Non displayable" << std::endl;
    if (!overFlow(s))
        std::cout << "int: " << static_cast<int>(d) << "\n";
    std::cout << "float: " << d;
    if (isround(d))
        std::cout << ".0f\n";
    else
        std::cout << "f\n";
    
    std::cout << "double: " << d;
    if (isround(d))
        std::cout << ".0\n";
    else 
        std::cout << "\n";    
};

void ScalarConverter::convert(std::string const &input)
{
    
    switch (getType(input))
    {
        case CHAR:
            typeChar(input[0]);
            break;
            
        case INT:
            
            typeInt(input);
            break;
            
        case FLOAT:
            typeFloat(input);
            break;
            
        case DOUBLE:
            typeDouble(input);
            break;
            
        case SPCF:
            typePseudoF(input);
            break;
            
        case SPC:
            typePseudo(input);
            break;
            
        default:
            std::cout << "\033[31;1mError, invalid literal format\n\033[0m";
    }
     
};


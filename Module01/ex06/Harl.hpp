/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 19:21:36 by cova              #+#    #+#             */
/*   Updated: 2025/08/11 18:30:23 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#define RST "\033[0m"         /* Reset to default color */
#define RED "\033[1;31m"      /* Bold Red*/
#define GREEN "\033[1;32m"    /* Bold Green */
#define YELLOW "\033[1;33m"   /* Bold Yellow */
#define BLUE "\033[1;34m"     /* Bold Blue */
#define MAGENTA "\033[1;35m"  /* Bold Magenta */
#define CYAN "\033[1;36m"     /* Bold Cyan */
#define WHITE "\033[1;37m"    /* Bold White */
#define BG_BLACK "\033[40m"   /* Background Black */
#define BG_GREEN "\033[42m"   /* Background Green */
#define BG_YELLOW "\033[43m"  /* Background Yellow */
#define BG_RED "\033[41m"     /* Background Red */
#define BG_BLUE "\033[44m"    /* Background Blue */
#define BG_MAGENTA "\033[45m" /* Background Magenta */
#define BG_CYAN "\033[46m"    /* Background Cyan */
#define BG_WHITE "\033[47m"   /* Background White */
#include <iostream>
#include <string>
#include <cstdio>

class Harl
{
    private:    
        void debug();
        void info ();
        void warning();
        void error();
    public:
        Harl();
        ~Harl();
        void    complain(std::string level);
};

void printError (std::string msg);

#endif
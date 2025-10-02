/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 12:07:39 by cova              #+#    #+#             */
/*   Updated: 2025/10/02 12:44:09 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <exception>
#include <vector>
#include <list>
#include <algorithm>

template<typename T>
typename T::iterator easyfind(T& cont,int value)
{
   /* typename T::iterator it = find(cont.begin(), cont.end(), value);
    if (it != cont.end())
        return it;*/
    typename T::iterator it;
    for (it = cont.begin(); it != cont.end(); it++)
    {
        if (*it == value)
            return it;
    }
    
    throw std::runtime_error("\033[31;1mItem not found\033[0m");
}        
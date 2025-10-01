/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 12:34:56 by cova              #+#    #+#             */
/*   Updated: 2025/10/01 13:24:27 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include <string>

template<typename F>
void  func(F &v)
{
    v = v*2;
}

template<typename F>
void print(const F  &v)
{
    std::cout << v << " ";
}

template<typename T, typename F>
void iter(T *arr, size_t len, F func)
{
    for (size_t i =0; i < len; i++)
    {
        func(arr[i]);
    }
    
}


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 12:04:58 by cova              #+#    #+#             */
/*   Updated: 2025/09/29 12:31:30 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>

void swap(T &v1, T &v2)
{
    T tmp = v1;
    v1 = v2;
    v2 = tmp;
    
};

template <typename T>
const T &min(T &v1, T &v2)
{
   if (v1 < v2) 
        return v1;
    else 
        return v2;
    
};

template <typename T>
const T &max(T &v1, T &v2)
{
    if (v2 < v1) 
        return v1;
    else 
        return v2;
};

#endif
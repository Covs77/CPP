/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 17:54:32 by cova              #+#    #+#             */
/*   Updated: 2025/10/01 18:30:42 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef ARRAY_HPP
#define ARRAY_HPP

#include  <iostream>
#include <string>

template<typename T>
class Array
{
    private: 
        T*      _array;
        size_t  _size;
    
    public:

        Array ();
        ~Array();
        Array(unsigned int n);
        Array(Array const &oth);
        Array &operator=(const Array &oth);
        T &operator[](const size_t index);
        size_t size(void) const;

        class OutOfBoundsException:public std::exception
            {
                public:
                    virtual const char* what() const throw();
            };
};


#include "Array.tpp"
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 17:44:05 by cova              #+#    #+#             */
/*   Updated: 2025/10/01 19:15:12 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array()
{
    _array = NULL;
    _size = 0;
    std::cout << "\033[035;1mEmpty constructor called...\033[0m\n";
};


template<typename T>
Array<T>::~Array()
{
    if (_array)
        delete[] _array;
    std::cout << "\033[031;1mDefault destructor called...\033[0m\n";
};

template<typename T>
Array<T>::Array(unsigned int n)
{
    std::cout << "\033[035;1mN elements constructor called...\033[0m\n";
    _array = new T[n];
    _size = n;    
};

template<typename T>
Array<T>::Array(Array<T> const &oth)
{
     std::cout << "\033[035;1mCopy constructor called...\033[0m\n";
     _size = oth._size;
     _array = new T[_size];
    for (size_t i=0; i<_size; i++)
        _array[i] = oth._array[i];
};

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &oth)
{
    if (oth != *this)
    {
        if (_array)
            delete[] _array;
        _size = oth._size;
        _array = new T[_size];
        size_t i = 0;
        while (i < _size)
        { 
            _array[i] = oth._array[i];
            i++;
        }
    }    
    return *this;
};

template<typename T>
T &Array<T>::operator[](const size_t index)
{
    if ((index > _size) || (_array == NULL))
        throw OutOfBoundsException();
    return _array[index];    
};

template<typename T>
size_t Array<T>::size(void) const
{
  return _size;
    
};

template<typename T>
const char *Array<T>::OutOfBoundsException::what() const throw()
{
    return "\033[31;1mError : index out of range\033[0m";
};
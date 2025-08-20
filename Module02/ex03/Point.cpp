/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 13:37:28 by cova              #+#    #+#             */
/*   Updated: 2025/08/20 19:50:37 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(): _x(0), _y(0)
{
   // std::cout << "Default Point constructor called" << std::endl;
}

Point::Point(const Fixed& x, const Fixed& y) : _x(x), _y(y)
{
    //std::cout << "Parameterized Point constructor called" << std::endl;
}

Point::~Point()
{
 //   std::cout << "Destructor called" << std::endl;
}

Point &Point::operator=(const Point &copy)
{
 //   std::cout << "Point assignment operator called" << std::endl;
    if (this != &copy)
    {
        (Fixed) this->_x = copy._x;
        (Fixed) this->_y = copy._y;
    }
    return *this;
}


Point::Point(const Point &copy)
{
   //std::cout << "Point copy constructor called" << std::endl;
    (Fixed) this->_x = copy.getX();
    (Fixed) this->_y = copy.getY();
}


const Fixed Point::getX() const
{
    return (this->_x);
}

const Fixed Point::getY() const
{
    return (this->_y);
}


/*  Convierto el número a positivo (valor absoluto) */
Fixed& Point::abs(Fixed &n)
{
	if (n < 0)
        n =  n * -1;
    return n;
}
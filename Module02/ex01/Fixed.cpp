/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 12:14:23 by cova              #+#    #+#             */
/*   Updated: 2025/08/20 12:07:28 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

/****** Constructor *******/
Fixed::Fixed(void)
{
    this->_val = 0;
    std::cout << "Default constructor called" << std::endl;
}

/****** Copy Constructor ***********/
Fixed::Fixed(const Fixed &src)
{
    std::cout << "Copy constructor called" << std::endl;
    _val = src._val;
}

/******* Assignation Operator ******/
Fixed& Fixed::operator=(const Fixed& copy)
 {
    std::cout << "Copy assignament operator called" << std::endl;
    if (this != &copy)   
    {
        this->_val = copy.getRawBits();
    }
    return *this;
}

/******* Destructor ********/
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}


Fixed::Fixed( const int intNbr)
{
    std::cout << "Int constructor called" << std::endl;    
    _val = intNbr << _bits;
}

Fixed::Fixed( const float floatNbr)
{
    std::cout << "Float constructor called" << std::endl;
    _val = static_cast<float>(roundf(floatNbr * (1 << _bits)));
}



int     Fixed::getRawBits( void ) const
 {
    return this->_val; 
 }

void    Fixed::setRawBits( int const raw )
{
    this->_val = raw;    
}

float   Fixed::toFloat( void ) const
{
    return ((float)this->_val / (1 << _bits));    
}


int     Fixed::toInt( void ) const
{
    return (this->_val >> _bits);
}

std::ostream &operator << ( std::ostream &os, Fixed const &newNum)
{
	os << newNum.toFloat();
	return os;
}
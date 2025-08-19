/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 12:14:23 by cova              #+#    #+#             */
/*   Updated: 2025/08/19 12:32:51 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed(void)
{
    this->_val = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
    std::cout << "Copy constructor called" << std::endl;
    _val = src.getRawBits();
}


 Fixed& Fixed::operator=(const Fixed& copy)
 {
    std::cout << "Copy assignament operator called" << std::endl;
    if (this != &copy)   
    {
        this->_val = copy.getRawBits();
    }
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

 int     Fixed::getRawBits( void ) const
 {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_val; 
 }

void    Fixed::setRawBits( int const raw )
{
    this->_val = raw;    
}

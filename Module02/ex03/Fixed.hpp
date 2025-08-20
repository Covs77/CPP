/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 12:07:48 by cova              #+#    #+#             */
/*   Updated: 2025/08/20 12:23:39 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int                 _val;
        static const int    _bits = 8;
    
    public:
        Fixed();
        Fixed( const int );
		Fixed( const float );
        Fixed(const Fixed &copy);
        Fixed &operator=(const Fixed &copy);
        ~Fixed();
        
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );

        float   toFloat( void ) const;
        int     toInt( void ) const;

        /*   Comparadores */
        bool operator>(const Fixed &copy) const;
        bool operator<(const Fixed &copy) const;
        bool operator>=(const Fixed &copy) const;
        bool operator<=(const Fixed &copy) const;
        bool operator==(const Fixed &copy) const;
        bool operator!=(const Fixed &copy) const;
        
        /* Operadores aritméticos*/

        Fixed operator+(const Fixed &copy) const;
        Fixed operator-(const Fixed &copy) const;
        Fixed operator*(const Fixed &copy) const;
        Fixed operator/(const Fixed &copy) const;

        /* Operadores incrementales*/
        Fixed operator++();
        Fixed operator++(int);
        Fixed operator--();
        Fixed operator--(int);

        /*   Max/Min   */
        static Fixed &max(Fixed &a, Fixed &b);
        static Fixed &min(Fixed &a, Fixed &b);   
        static  const Fixed &max (const Fixed &a, const Fixed &b);
        static  const Fixed &min (const Fixed &a, const Fixed &b);
};
 
std::ostream& operator << ( std::ostream& op, Fixed const & i);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 12:07:48 by cova              #+#    #+#             */
/*   Updated: 2025/08/19 12:18:22 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>
class Fixed
{
    private:
        int                 _val;
        static const int    _bits = 8;
    
    public:
        Fixed();
        Fixed(const Fixed &copy);
        Fixed &operator=(const Fixed &copy);
        ~Fixed();
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
};
 

#endif
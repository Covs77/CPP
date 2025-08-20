/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 13:17:40 by cova              #+#    #+#             */
/*   Updated: 2025/08/20 14:02:01 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef POINT_HPP
# define POINT_HPP

#include <string>
#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point
{
    private: 
        const Fixed _x;
        const Fixed _y;
    
    public:

        Point();
        Point(const Fixed& x, const Fixed& y);
        Point(const Point &copy);
        ~Point();
        Point &operator=(const Point &copy);
        const Fixed getX() const;
        const Fixed getY() const;
        
        /* Functions */
		static Fixed& abs(Fixed &n);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif
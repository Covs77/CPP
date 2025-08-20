/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 13:22:33 by cova              #+#    #+#             */
/*   Updated: 2025/08/20 19:51:22 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    std::cout << "Aqui verifico si el punto está dentro" << std::endl;
    std::cout << "valor de a" << a.getX() << std::endl;
    std::cout << "valor de b" << b.getX() << std::endl;
    std::cout << "valor de c" << c.getX() << std::endl;
    std::cout << "valor de point" << point.getX() << std::endl;   
    return (true);
};
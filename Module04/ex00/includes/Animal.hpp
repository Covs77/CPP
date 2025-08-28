/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 14:00:06 by cova              #+#    #+#             */
/*   Updated: 2025/08/28 14:09:48 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <string>

class Animal
{
    protected: 
        std::string _type;

    public:
    /* constructor, constr copia, destructor, operador=, gettype, setType, makesound*/
        Animal();
        Animal(const Animal &other);        
        ~Animal();
        Animal(std::string type);
        makeSound();
};
#endif

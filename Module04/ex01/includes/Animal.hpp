/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 14:00:06 by cova              #+#    #+#             */
/*   Updated: 2025/09/01 13:55:33 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <string>
#include <iostream>

class Animal
{
    protected: 
        std::string _type;

    public:
    /* constructor, constr copia, destructor, operador=, gettype, setType, makesound*/
        Animal();
        Animal(const Animal &other);
        virtual ~Animal();
        Animal &operator=(const Animal &other);
        virtual std::string getType() const;
        void setType(std::string const type);
        virtual void makeSound() const;
};
#endif

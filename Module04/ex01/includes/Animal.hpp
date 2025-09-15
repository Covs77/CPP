/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 14:00:06 by cova              #+#    #+#             */
/*   Updated: 2025/09/03 13:16:24 by cleguina         ###   ########.fr       */
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
        std::string getType() const;
        void setType(std::string const type);
        void makeSound() const;
};
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 13:31:12 by cova              #+#    #+#             */
/*   Updated: 2025/09/03 13:41:50 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
    private:

        Brain *brain;
        
    public:

        Cat();
        ~Cat();
        Cat(const Cat &other);
        Cat &operator=(const Cat &other);
        void makeSound() const;
        Brain *getBrain();
};
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 17:08:15 by cova              #+#    #+#             */
/*   Updated: 2025/09/01 17:31:57 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>


class Brain
{
    private:

        std::string ideas [100];
    
    public:    

        Brain();
        ~Brain();
        Brain(Brain &other);
        Brain &operator=(Brain &other);
        std::string *getIdeas(int index);
        void setIdeas(int index, std::string idea);
};
#endif
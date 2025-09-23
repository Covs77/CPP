/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:25:09 by anttorre          #+#    #+#             */
/*   Updated: 2025/09/23 17:39:46 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Base.hpp"

class C: public Base
{
    private:
        std::string _type;
    public:

        C();
        ~C();
        std::string getType() const;
};
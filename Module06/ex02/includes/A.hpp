/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:25:09 by anttorre          #+#    #+#             */
/*   Updated: 2025/09/23 17:39:13 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Base.hpp"

class A: public Base
{
    private:
        std::string _type;
    public:

        A();
        ~A();
        std::string getType() const;
};
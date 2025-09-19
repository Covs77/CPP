/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 11:57:09 by cova              #+#    #+#             */
/*   Updated: 2025/09/19 13:37:25 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class Intern
{
    public:

        Intern();
        Intern(Intern const &copy);
        ~Intern();
        Intern &operator=(const Intern &copy);
        AForm *makeForm(std::string const  &formName, std::string const &target);
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:09:05 by cova              #+#    #+#             */
/*   Updated: 2025/09/17 12:45:48 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
 
#include "AForm.hpp"
#include <string>
#include  <iostream>
#include  <fstream>


class ShrubberyCreationForm : public AForm
{
    private:
        std::string _target;
    
    public:
        ShrubberyCreationForm(const std::string &target);
        ~ShrubberyCreationForm();
        
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
        void execute (Bureaucrat const &executor) const;
   
};
#endif
 
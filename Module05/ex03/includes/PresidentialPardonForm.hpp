/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:09:05 by cova              #+#    #+#             */
/*   Updated: 2025/09/17 17:36:33 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
 
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>
#include <iostream>
#include <fstream>


class PresidentialPardonForm : public AForm
{
    private:
        std::string _target;
        PresidentialPardonForm();
    
    public:
        
        PresidentialPardonForm(const std::string &target);
        ~PresidentialPardonForm();
        PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
        std::string getTarget() const;
        void execute (Bureaucrat const &executor) const;
   
};
std::ostream &operator<<(std::ostream &out, PresidentialPardonForm *src);

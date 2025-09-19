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
#include <string>
#include <iostream>


class RobotomyRequestForm: public AForm
{
    private:
        std::string _target;
        RobotomyRequestForm();
    
    public:

        RobotomyRequestForm(const std::string &target);
        ~RobotomyRequestForm();
        RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
        std::string getTarget() const;
        void execute (Bureaucrat const &exec) const;
    
};
std::ostream &operator<<(std::ostream &out, RobotomyRequestForm *src);
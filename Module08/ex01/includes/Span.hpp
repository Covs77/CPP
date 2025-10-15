/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 13:41:20 by cleguina          #+#    #+#             */
/*   Updated: 2025/10/04 13:59:19 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <vector>

class Span
{
    private:
        std::vector<int> _vect;
        Span();
    public:
        Span(unsigned int n);
        ~Span();
        Span &operator=(const Span &ot);
        Span(const Span &copy);
};
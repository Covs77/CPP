/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 12:34:51 by cova              #+#    #+#             */
/*   Updated: 2025/09/29 13:00:34 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "iter.hpp"
#include <iostream>
#include <string>




int main() {
    int arr[] = {1, 2, 3, 4, 5};
    size_t len = 5;

    std::cout << "Original array: ";
    iter(arr, len, print<int>);
    std::cout << std::endl;

    iter(arr, len, func<int>); // incrementa cada elemento

    std::cout << "Modified array: ";
    iter(arr, len, print<int>);
    std::cout << std::endl;

    return 0;
}
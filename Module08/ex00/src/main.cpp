/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 12:07:41 by cova              #+#    #+#             */
/*   Updated: 2025/10/02 12:46:03 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <string>

int main() {
    std::vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    std::list<int> l;
    l.push_back(5);
    l.push_back(10);
    l.push_back(15);
    std::cout << "\033[035;1m========VECTOR=========\033[0m" << std::endl;
    for (size_t i = 0; i < v.size(); i++)
    {
        std::cout << "Vector[" << i << "]: " << v[i] << std::endl;
    }
    std::cout << "\033[035;1m========LIST=========\033[0m" << std::endl;
    std::list<int>::iterator it = l.begin();
    int i = 0;
    for (it = l.begin(); it != l.end(); it++, i++)
    {
        std::cout << "Lista[" << i << "]: " << *it << std::endl;
    }
    
    try {
        std::vector<int>::iterator it1 = easyfind(v, 20);
        std::cout << "Buscamos el 20 en el vector " << std::endl;
        std::cout << "Encontrado en vector: " << *it1 << std::endl;

        std::cout << "Buscamos el 12 en la lista..." << std::endl;
        std::list<int>::iterator it2 = easyfind(l, 12); // no existe
        std::cout << "Encontrado en lista: " << *it2 << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "Excepción: " << e.what() << std::endl;
    }

    return 0;
}
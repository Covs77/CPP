/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:25:09 by anttorre          #+#    #+#             */
/*   Updated: 2025/09/29 10:59:12 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cstdlib>   
#include <ctime>
#include "A.hpp"
#include <typeinfo>

//class D: public Base{};

int main()
{
	srand(time(0));
	std::cout << "\033[33;1mDynamic Cast Test" << std::endl;
	std::cout << "====================\033[0m" << std::endl;

	for (int i = 0; i < 5; i++)
	{
		std::cout << "\033[32;1m\n--- Test " << (i + 1) << " ---\033[0m" << std::endl;
		Base*	obj = generate();
		
		identify(obj);
		identify(*obj);
		std::cout << "\033[31;1mDeleting object...\033[0m" << std::endl;
		delete obj;
	}
	/*std::cout << "\033[32;1m\n--- Test FALLIDO ---\033[0m" << std::endl;
  	Base* objD = new D();
        identify(objD);    // puntero -> imprime "Unknown"
    identify(*objD);   // referencia -> atrapamos std::bad_cast en cada intento
    delete objD; */
	std::cout << "\033[35;1m\nAll tests completed!\033[0m" << std::endl;
	return (0);
}
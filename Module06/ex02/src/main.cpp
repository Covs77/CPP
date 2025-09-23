/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:25:09 by anttorre          #+#    #+#             */
/*   Updated: 2025/09/23 19:00:45 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cstdlib>   // contiene srand() y rand()
#include <ctime>

int main()
{
	srand(time(NULL));
	std::cout << "\033[32;1m===Dynamic Cast Test" << std::endl;
	std::cout << "====================\033[0m" << std::endl;

	for (int i = 0; i < 5; i++)
	{
		std::cout << "\033[32;1m\n--- Test " << (i + 1) << " ---\033[0m" << std::endl;
		Base*	obj = generate();
        std::cout << "tipo de objeto" << obj->getType() << std::endl;

		identify(obj);
		identify(*obj);
		std::cout << "\033[31;1mDeleting object...\033[0m" << std::endl;
		delete obj;
	}
	std::cout << "\033[35;1m\n All tests completed!\033[0m" << std::endl;
	return (0);
}
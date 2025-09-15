/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 14:04:27 by cova              #+#    #+#             */
/*   Updated: 2025/09/03 13:42:53 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"


int main()
{
	//std::cout << "\033[32;1m" << "\nIntento crear un objeto animal directamente\n" << "\033[0m";
	//Animal a;
	//std::cout << "\033[32;1m" << "---------------------------------------------\n" << "\033[0m";
	
	std::cout << "\033[31;1m" << "\n=======Constructors==========\n" << "\033[0m";
	Animal* dog = new Dog();
	Animal* cat = new Cat();
	
	std::cout << std::endl;
	std::cout << "Dog type: " << dog->getType() << " " << std::endl;
	std::cout << "Cat type: " << cat->getType() << " " << std::endl;
	
	std::cout << "\033[31;1m" << "\n===========Destructors==========\n" << "\033[0m";
	delete dog;
	delete cat;
	return 0;
}

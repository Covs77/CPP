/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 14:04:27 by cova              #+#    #+#             */
/*   Updated: 2025/09/01 13:53:51 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	const Animal* animal = new Animal();
	std::cout << "Type of animal: " << animal->getType() << std::endl;
	animal->makeSound();
	std::cout << std::endl;
	
	const Animal* salchicha = new Dog();
	std::cout << "Type of animal: "  << salchicha->getType() << " " << std::endl;
	salchicha->makeSound();
	std::cout << std::endl;
	
	const Animal* persa = new Cat();
	std::cout << "Type of animal: "  << persa->getType() << " " << std::endl;
	persa->makeSound();
	std::cout << std::endl;

	/* const WrongAnimal* wrongAnimal = new WrongAnimal();
	std::cout << wrongAnimal->getType() << " " << std::endl;
	wrongAnimal->makeSound();
	std::cout << std::endl; */

	/*const WrongAnimal* wrongSalchicha = new WrongCat();
	std::cout << wrongSalchicha->getType() << " " << std::endl;
	wrongSalchicha->makeSound();
	std::cout << std::endl;*/

	delete animal; 
	std::cout << std::endl;
	delete salchicha; 
	std::cout << std::endl;
	delete persa;
	std::cout << std::endl;
	/* delete wrongAnimal;
	std::cout << std::endl;
	delete wrongSalchicha;
	std::cout << std::endl; */
	
	return 0;
}
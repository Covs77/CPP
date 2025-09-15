/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 14:04:27 by cova              #+#    #+#             */
/*   Updated: 2025/09/03 13:00:57 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
	std::cout << "\033[32;1m" << "===Creo animal genérico====\n" << "\033[0m";
	const Animal* generico = new Animal();
	std::cout << "\033[32;1m" << "===Creo perro====\n" << "\033[0m";
	const Animal* perro = new Dog();
	std::cout << "\033[32;1m" << "===Creo gato====\n" << "\033[0m";
	const Animal* gato = new Cat();
	std::cout << "\033[32;1m" << "===Creo WrongAnimal====\n" << "\033[0m";
	const WrongAnimal* wc = new WrongCat();
	std::cout << "\033[32;1m" << "===Creo Wrongcat====\n" << "\033[0m";
	WrongCat wcat;
	std::cout << "\033[32;1m" << "===Creo perro sin herencia====\n" << "\033[0m";
	Dog dogui;
	std::cout << "\033[32;1m" << "===Pinto Types====\n" << "\033[0m";
	std::cout << perro->getType() << "\033[0m" << std::endl;
	std::cout << gato->getType() << " " << std::endl;
	std::cout << wc->getType() << " " << std::endl;
	
	std::cout << "\033[32;1m" << "===SONIDOS====\n" << "\033[0m";
	
	generico->makeSound();
	perro->makeSound();
	gato->makeSound();
	wc->makeSound();
	wcat.makeSound();
	dogui.makeSound();
	
	std::cout << "\033[31;1m" << "\n===DESTRUCTORRES====\n" << "\033[0m";
	std::cout << "\033[31;1m" << "Genérico\n" << "\033[0m";
	delete generico;
	std::cout << "\033[31;1m" << "Perro\n" << "\033[0m";
	delete perro;
	std::cout << "\033[31;1m" << "Gato\n" << "\033[0m";
	delete gato;
	std::cout << "\033[31;1m" << "wrongCat\n" << "\033[0m";
	delete wc;
	std::cout << "\033[31;1m" << "WrongCat && dogui\n" << "\033[0m";
	return 0;
}
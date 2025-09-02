/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 14:04:27 by cova              #+#    #+#             */
/*   Updated: 2025/09/02 19:24:16 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{

	const Animal* generico = new Animal();
	const Animal* perro = new Dog();
	const Animal* gato = new Cat();
	const WrongAnimal* k = new WrongCat();
	WrongCat gatito;
	WrongCat cat(gatito);
	Dog dogui;
	std::cout << perro->getType() << " " << std::endl;
	std::cout << gato->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	std::cout << "\n\n===SONIDOS====\n\n " << std::endl;
	
	generico->makeSound();
	
	perro->makeSound(); //will output the cat sound!
	gato->makeSound();
	k->makeSound();
	cat.makeSound();
	std::cout << "\n\n===DESTRUCTORRES====\n\n " << std::endl;
	delete generico;
	delete perro;
	delete gato;
	delete k;

	return 0;
}
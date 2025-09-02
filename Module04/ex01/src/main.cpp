/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 14:04:27 by cova              #+#    #+#             */
/*   Updated: 2025/09/02 11:15:44 by cleguina         ###   ########.fr       */
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
	
	Animal* animal = new Animal();
	Animal* dog = new Dog();
	Animal* cat = new Cat();
	
	std::cout << std::endl;
	std::cout << "Animal type: " << animal->getType() << " " << std::endl;
	std::cout << "Dog type: " << dog->getType() << " " << std::endl;
	std::cout << "Cat type: " << cat->getType() << " " << std::endl;
	
	std::cout << std::endl;
	std::cout << "Animal sound: ";
	animal->makeSound();
	std::cout << "Dog sound: ";
	dog->makeSound();
	std::cout << "Cat sound: ";
	cat->makeSound();
	
	std::cout << std::endl;
	std::cout << "WrongAnimals Tests" << std::endl;
	WrongAnimal *wrongAnimal = new WrongAnimal();
	WrongAnimal *wrongCat = new WrongCat();
	
	std::cout << std::endl;
	std::cout << "WrongAnimal type: " << wrongAnimal->getType() << " " << std::endl;
	std::cout << "WrongCat type: " << wrongCat->getType() << " " << std::endl;
	
	std::cout << std::endl;
	std::cout << "WrongAnimal sound: ";
	wrongAnimal->makeSound();
	std::cout << "WrongCat sound: ";
	wrongCat->makeSound();

	std::cout << std::endl;

	delete animal;
	delete dog;
	delete cat;
	delete wrongAnimal;
	delete wrongCat;

	std::cout << std::endl;
	std::cout << "DEEP COPY TEST" << std::endl;
	Cat *originalCat = new Cat();
	Cat *copiedCat = new Cat();
	*copiedCat = * originalCat;
	originalCat->makeSound();
	originalCat->getBrain()->setIdeas(0, "Cazar ratones");


	copiedCat->makeSound();
	copiedCat->getBrain()->setIdeas(0, "Arañar el sofá");

	if (originalCat->getBrain()->getIdeas(0) != NULL)
		std::cout << "Idea del gato original: " << *originalCat->getBrain()->getIdeas(0) << std::endl;
	if (copiedCat->getBrain()->getIdeas(0) != NULL)
		std::cout << "Idea del gato copiado: " << *copiedCat->getBrain()->getIdeas(0) << std::endl;
	std::cout << std::endl;
	
	delete originalCat;
	delete copiedCat;
	return 0;
}

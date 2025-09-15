/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 14:04:27 by cova              #+#    #+#             */
/*   Updated: 2025/09/03 13:29:16 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"


void arrayTest()
{

	std::cout << "\033[32;1m" << "====================\n==== Array Test ====\n" << "\033[0m";
    const int arraySize = 4;
    Animal* animals[arraySize];
    
    for (int i = 0; i < arraySize; i++)
    {
        if (i < arraySize / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    std::cout << "\033[31;1m" << "\n==== Delete all ====\n" << "\033[0m";
    for (int i = 0; i < arraySize; i++)
        delete animals[i];
}

int main()
{
	std::cout << std::endl;
	std::cout << "\033[32;1m" << "===CONSTRUCTORS====\n" << "\033[0m";
	Cat *originalCat = new Cat();
	Cat *copiedCat = new Cat();
	Animal *cat  = new Cat();
	
	std::cout << "\033[32;1m" << "\n======CHECK CAT SOUNDS======\n" << "\033[0m";
	cat->makeSound();
	

	std::cout << "\033[32;1m" << "\n======DEEP COPY======\n" << "\033[0m";
	*copiedCat = *originalCat;
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
	delete cat;
	
	arrayTest();
	return 0;
}

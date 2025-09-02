/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 14:04:27 by cova              #+#    #+#             */
/*   Updated: 2025/09/02 19:39:22 by cleguina         ###   ########.fr       */
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
	
	std::cout << std::endl;
	std::cout << "======DEEP COPY TEST======\n" << std::endl;
	Cat *originalCat = new Cat();
	Cat *copiedCat = new Cat();
	Animal *cat  = new Cat();
	
	std::cout << "======check sonido======" << std::endl;
	cat->makeSound();
	
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
	return 0;
}

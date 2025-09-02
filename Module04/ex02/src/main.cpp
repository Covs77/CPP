/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 14:04:27 by cova              #+#    #+#             */
/*   Updated: 2025/09/02 20:05:12 by cleguina         ###   ########.fr       */
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
	std::cout << "intento crear un objeto animal\n";
	//Animal a;
	std::cout << "------------------------------\n";
	//Animal* animal = new Animal();
	Animal* dog = new Dog();
	Animal* cat = new Cat();
	
	std::cout << std::endl;
	//std::cout << "Animal type: " << animal->getType() << " " << std::endl;
	std::cout << "Dog type: " << dog->getType() << " " << std::endl;
	std::cout << "Cat type: " << cat->getType() << " " << std::endl;
	

	return 0;
}

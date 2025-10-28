/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jdebrull <jdebrull@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:37:50 by Jdebrull          #+#    #+#             */
/*   Updated: 2025/10/28 15:45:31 by Jdebrull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main()
{
/* 	std::cout	<< "---Initialization of Animal class---\n";
	const Animal* meta = new Animal();
	std::cout	<< "\n---Initialization of Dog class---\n";
	const Animal* j = new Dog();
	std::cout	<< "\n---Initialization of Cat class---\n";
	const Animal* i = new Cat();
	std::cout	<< std::endl;

	std::cout	<< "First type of animal = " << j->getType() << " " << std::endl;
	std::cout	<< "Second type of animal = " << i->getType() << " " << std::endl;

	std::cout	<< std::endl;

	std::cout	<< "First type of animal says:\n";
	j->makeSound();
	std::cout	<< "\nSecond type of animal says:\n";
	i->makeSound();
	std::cout	<< "\nBut what does the animal say ?\n";
	meta->makeSound();

	std::cout	<< "\nFreeing animals\n\n";
	delete (i);
	delete (j);
	delete (meta);
	
	std::cout << "\n=== Wrong Hierarchy ===" << std::endl;
	std::cout	<< "---Initialization of WrongAnimal class---\n";
    const WrongAnimal* wrongMeta = new WrongAnimal();
	std::cout	<< "\n---Initialization of WrongCat class---\n";
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << "\nTypes:" << std::endl;
    std::cout << wrongCat->getType() << std::endl;

    std::cout << "\nSounds:" << std::endl;
    wrongCat->makeSound();
    wrongMeta->makeSound();

    std::cout << "\nDeleting wrong animals..." << std::endl;
    delete wrongCat;
    delete wrongMeta;*/

	std::cout	<< "Initialization of dog: " << std::endl;
	const Animal* jo = new Dog();
	std::cout	<< "\nInitialization of cat: " << std::endl;
	const Animal* io = new Cat();

	std::cout	<< "\nFreeing the animals:\n" << std::endl;
	delete io; // should delete Cat and its Brain
	std::cout	<< std::endl;
	delete jo; // should delete Dog and its Brain

	std::cout	<< "\n\n\nCreating the array of animals:\n" << std::endl;

	int		a = 10;
	Animal*	animals[a];

	for (int i = 0; i < a; i++)
	{
		if (i % 2 == 0)
		{
			animals[i] = new Dog();
			std::cout	<< std::endl;
		}
		else
		{
			animals[i] = new Cat();
			std::cout	<< std::endl;
		}
	}

	std::cout	<< "\nPrinting the array:\n" << std::endl;

	for (int i = 0; i < a; i++)
	{
		std::cout	<< "Type of animal = " << animals[i]->getType() << std::endl;
		animals[i]->makeSound();
	}

	std::cout	<< "\nFreeing the array of animals:\n" << std::endl;

	for (int i = 9; i >= 0; i--)
	{
		delete (animals[i]);
		std::cout	<< std::endl;
	}

	std::cout	<< std::endl;

	std::cout	<< "Initialization of dog1:\n" << std::endl;
	Dog dog1;
	std::cout	<< "\nInitialization of dog2:\n" << std::endl;
	Dog dog2 = dog1; // copy constructor;

	std::cout	<< std::endl;

	dog1.setIdea(0, "I want a bone!");
	dog2.setIdea(0, "I want a nap!");

	std::cout	<< "Dog1 is thinking of : " << dog1.getIdea(0) <<std::endl;
	std::cout	<< "Dog2 is thinking of : " << dog2.getIdea(0) << std::endl;
	std::cout	<< std::endl;

	return 0;
}
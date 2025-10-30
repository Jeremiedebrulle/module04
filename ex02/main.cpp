/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jdebrull <jdebrull@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:37:50 by Jdebrull          #+#    #+#             */
/*   Updated: 2025/10/29 14:59:27 by Jdebrull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main()
{
	std::cout	<< "Initialization of dog: " << std::endl;
	Dog* jo = new Dog();
	std::cout	<< "\nInitialization of cat: " << std::endl;
	const AAnimal* io = new Cat();

	std::cout	<< "\nFreeing the AAnimals:\n" << std::endl;
	delete io; // should delete Cat and its Brain
	std::cout	<< std::endl;
	delete jo; // should delete Dog and its Brain

	std::cout	<< "\n\n\nCreating the array of AAnimals:\n" << std::endl;

	int		a = 10;
	AAnimal*	AAnimals[a];

	for (int i = 0; i < a; i++)
	{
		if (i % 2 == 0)
		{
			AAnimals[i] = new Dog();
			std::cout	<< std::endl;
		}
		else
		{
			AAnimals[i] = new Cat();
			std::cout	<< std::endl;
		}
	}

	std::cout	<< "\nPrinting the array:\n" << std::endl;

	for (int i = 0; i < a; i++)
	{
		std::cout	<< "Type of AAnimal = " << AAnimals[i]->getType() << std::endl;
		AAnimals[i]->makeSound();
	}

	std::cout	<< "\nFreeing the array of AAnimals:\n" << std::endl;

	for (int i = 9; i >= 0; i--)
	{
		delete (AAnimals[i]);
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

	std::cout	<< "\n" << std::endl;

	AAnimal* ptr = new Dog();
	AAnimal& ref = *ptr;

	std::cout	<< "\n" << std::endl;

	ref.makeSound();
	
	std::cout	<< "\n" << std::endl; 
	delete ptr;
	std::cout	<< std::endl;
	//std::cout	<< "Should produce error right about here..." << std::endl;
	//AAnimal	a;

	return 0;
}
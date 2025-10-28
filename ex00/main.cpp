/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jdebrull <jdebrull@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:37:50 by Jdebrull          #+#    #+#             */
/*   Updated: 2025/10/28 12:24:57 by Jdebrull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	std::cout	<< "---Initialization of Animal class---\n";
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
    delete wrongMeta;

	return 0;
}
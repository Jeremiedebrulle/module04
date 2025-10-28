/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jdebrull <jdebrull@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:24:31 by Jdebrull          #+#    #+#             */
/*   Updated: 2025/10/28 14:53:00 by Jdebrull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout	<< "Cat default constructor called." << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const std::string& type) {
	std::cout	<< "Cat constructor called (type = " << type << ")" << std::endl;
	this->type = type;
	this->brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout	<< "Cat copy constructor called." << std::endl;
	this->type = other.type;
	this->brain = new Brain();
}

Cat&	Cat::operator=(const Cat& other) {
	std::cout	<< "Cat assignment operator called" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		this->type = other.type;
		*this->brain = *other.brain;		
	}
	return (*this);
}

Cat::~Cat() {
	std::cout	<< "Cat destructor called" << std::endl;
	delete (this->brain);
}

void	Cat::makeSound() const {
	std::cout	<< "Miaw! Meow! Meoooow!\n";
}
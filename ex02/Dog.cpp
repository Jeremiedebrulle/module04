/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jdebrull <jdebrull@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:24:39 by Jdebrull          #+#    #+#             */
/*   Updated: 2025/10/29 14:26:53 by Jdebrull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout	<< "Dog default constructor called." << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const std::string& type) {
	std::cout	<< "Dog constructor called (type = " << type << ")" << std::endl;
	this->type = type;
	this->brain = new Brain();
}

Dog::Dog(const Dog& other) : AAnimal(other) {
	std::cout	<< "Dog copy constructor called." << std::endl;
	this->type = other.type;
	this->brain = new Brain(*other.brain); // the new function makes sur cat and dog each get unique brain object
}

Dog&	Dog::operator=(const Dog& other) {
	std::cout	<< "Dog assignment operator called" << std::endl;
	if (this != &other)
	{
		AAnimal::operator=(other);
		this->type = other.type;
		*this->brain = *other.brain; //dereference so as to assign content not pointer;
	}
	return (*this);
}

Dog::~Dog() {
	std::cout	<< "Dog destructor called" << std::endl;
	delete (this->brain);
}

void	Dog::makeSound() const {
	std::cout << "Woof! Woof! WOOF!" << std::endl;
}

void	Dog::setIdea(int i, const std::string& idea) {
	brain->setIdea(i, idea);
}

const std::string	Dog::getIdea(int i) const {
	return (brain->getIdea(i));
}
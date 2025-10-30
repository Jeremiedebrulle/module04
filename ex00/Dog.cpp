/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jdebrull <jdebrull@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:24:39 by Jdebrull          #+#    #+#             */
/*   Updated: 2025/10/28 16:24:29 by Jdebrull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout	<< "Dog default constructor called." << std::endl;
	this->type = "Dog";
}

Dog::Dog(const std::string& type) {
	std::cout	<< "Dog parameter constructor called (type = " << type << ")" << std::endl;
	this->type = type;
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout	<< "Dog copy constructor called." << std::endl;
	this->type = other.type;
}

Dog&	Dog::operator=(const Dog& other) {
	std::cout	<< "Dog assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Dog::~Dog() {
	std::cout	<< "Dog destructor called" << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "Woof! Woof! WOOF!\n";
}
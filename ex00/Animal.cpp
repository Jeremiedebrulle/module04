/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jdebrull <jdebrull@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 16:18:19 by Jdebrull          #+#    #+#             */
/*   Updated: 2025/10/28 16:24:40 by Jdebrull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("default") {
	std::cout	<< "Default Animal constructor called." << std::endl;
}

Animal::Animal(const std::string& type) : type(type) {
	std::cout	<< "Animal parameter constructor called (type = " << type << ")" << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type) {
	std::cout	<< "Animal Copy constructor called (type = " << type << ")" << std::endl;
}

Animal::~Animal() {
	std::cout	<< "Animal Destructor called" << std::endl;
}

Animal&	Animal::operator=(const Animal& other) {
	std::cout	<< "Animal assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void	Animal::makeSound() const {
	std::cout << "Animal does not know yet what sound it wants to make...\n";
}

std::string	Animal::getType() const {
	return (this->type);
}

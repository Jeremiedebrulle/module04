/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jdebrull <jdebrull@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:11:49 by Jdebrull          #+#    #+#             */
/*   Updated: 2025/10/28 16:24:21 by Jdebrull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("default") {
	std::cout	<< "Default WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type) : type(type) {
	std::cout	<< "WrongAnimal parameter constructor called (type = " << type << ")" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type) {
	std::cout	<< "WrongAnimal Copy constructor called (type = " << type << ")" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout	<< "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other) {
	std::cout	<< "WrongAnimal assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void	WrongAnimal::makeSound() const {
	std::cout << "I'm an animal ...\n";
}

std::string	WrongAnimal::getType() const {
	return (this->type);
}

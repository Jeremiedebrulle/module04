/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jdebrull <jdebrull@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:18:11 by Jdebrull          #+#    #+#             */
/*   Updated: 2025/10/29 14:28:00 by Jdebrull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("default") {
	std::cout	<< "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const std::string& type) : type(type) {
	std::cout	<< "AAnimal parameter constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) : type(other.type) {
	std::cout	<< "AAnimal copy constructor called" << std::endl;
}

AAnimal&	AAnimal::operator=(const AAnimal& other) {
	std::cout	<< "AAnimal copy assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

AAnimal::~AAnimal() {
	std::cout	<< "AAnimal destructor called" << std::endl;
}

std::string	AAnimal::getType() const {
	return (type);
}
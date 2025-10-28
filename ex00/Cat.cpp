/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jdebrull <jdebrull@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:24:31 by Jdebrull          #+#    #+#             */
/*   Updated: 2025/10/27 16:55:19 by Jdebrull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout	<< "Cat default constructor called." << std::endl;
	this->type = "Cat";
}

Cat::Cat(const std::string& type) {
	std::cout	<< "Cat constructor called (type = " << type << ")" << std::endl;
	this->type = type;
}

Cat&	Cat::operator=(const Cat& other) {
	std::cout	<< "Cat assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Cat::~Cat() {
	std::cout	<< "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const {
	std::cout	<< "Miaw! Meow! Meoooow!\n";
}
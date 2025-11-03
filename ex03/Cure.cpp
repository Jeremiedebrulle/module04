/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdebrull <jdebrull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 00:18:03 by jdebrull          #+#    #+#             */
/*   Updated: 2025/11/03 13:13:26 by jdebrull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout	<< "Cure default constructor called" << std::endl;
}

Cure::Cure(const std::string& type) : AMateria("cure") {
	std::cout	<< "Cure parameterized constructor called" << std::endl;
}

Cure::Cure(const Cure& other) {
	std::cout	<< "Cure copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

Cure& Cure::operator=(const Cure& other) {
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Cure::~Cure() {
	std::cout	<< "Cure destructor called" << std::endl;
}

void	Cure::use(ICharacter& target) {
	std::cout	<< "* heals " << target.getName() << "‘s wounds *" << std::endl;
}

AMateria*	Cure::clone() const {
	return (new Cure(*this));
}
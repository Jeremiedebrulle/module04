/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdebrull <jdebrull@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 00:02:59 by jdebrull          #+#    #+#             */
/*   Updated: 2025/10/31 00:15:32 by jdebrull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout	<< "Ice default constructor called" << std::endl;
}

Ice::Ice(const std::string& type) : AMateria("ice") {
	std::cout	<< "Ice parameterized constructor called" << std::endl;
}

Ice::Ice(const Ice& other) {
	std::cout	<< "Ice copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

Ice& Ice::operator=(const Ice& other) {
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Ice::~Ice() {
	std::cout	<< "Ice destructor called" << std::endl;
}

void	use(ICharacter& target) {
	std::cout	<< "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria*	Ice::clone() const {
	return (new Ice(*this));
}
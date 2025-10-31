/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdebrull <jdebrull@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 23:35:12 by jdebrull          #+#    #+#             */
/*   Updated: 2025/10/31 00:12:21 by jdebrull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("default") {
	std::cout	<< "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(const std::string& type) : type(type) {
	std::cout	<< "AMateria parameterized constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& other) {
	std::cout	<< "AMateria copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

AMateria& AMateria::operator=(const AMateria& other) {
	if (this != &other)
		this->type = other.type;
	return (*this);
}

AMateria::~AMateria() {
	std::cout	<< "AMateria destructor called" << std::endl;
}

void	use(ICharacter& target) {
	(void)target;
}

const std::string&	AMateria::getType() const {
	return(type);
}
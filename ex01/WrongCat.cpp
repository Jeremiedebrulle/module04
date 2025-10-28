/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jdebrull <jdebrull@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:14:19 by Jdebrull          #+#    #+#             */
/*   Updated: 2025/10/28 12:15:42 by Jdebrull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout	<< "WrongCat default constructor called." << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const std::string& type) {
	std::cout	<< "WrongCat constructor called (type = " << type << ")" << std::endl;
	this->type = type;
}

WrongCat&	WrongCat::operator=(const WrongCat& other) {
	std::cout	<< "WrongCat assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout	<< "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout	<< "I'm a cat!\n";
}
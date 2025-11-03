/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdebrull <jdebrull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:25:29 by jdebrull          #+#    #+#             */
/*   Updated: 2025/11/03 13:45:13 by jdebrull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout	<< "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		inventory[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	std::cout	<< "MateriaSource copy constructor called" << std::endl;

	if (this != &other)
		*this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
	std::cout	<< "MateriaSource assignment operator called" << std::endl;

	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			delete (inventory[i]);
			inventory[i] = other.inventory[i]

		}	
	}
	return (*this);
}

MateriaSource::~MateriaSource() {
	std::cout	<< "MateriaSource desturctor called" << std::endl;
}
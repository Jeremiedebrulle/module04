/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jdebrull <jdebrull@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:49:39 by Jdebrull          #+#    #+#             */
/*   Updated: 2025/10/28 14:23:58 by Jdebrull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout	<< "Brain default constructor called." << std::endl;
}

Brain::Brain(const Brain& other) {
	std::cout	<< "Brain copy constructer called." << std::endl;
	for(int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
}

Brain&	Brain::operator=(const Brain& other) {
	std::cout	<< "Brain assignment operator called." << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return (*this);
}

Brain::~Brain() {
	std::cout	<< "Brain destructor called." << std::endl;
}

void	Brain::setIdea(int i, const std::string& idea) {
	this->ideas[i] = idea;
}

const std::string	Brain::getIdea(int i) const {
	return (ideas[i]);
}
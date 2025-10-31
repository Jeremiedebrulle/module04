/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdebrull <jdebrull@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 00:51:31 by jdebrull          #+#    #+#             */
/*   Updated: 2025/10/31 01:16:23 by jdebrull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("default") {
	std::cout	<< "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = 0;
}

Character::Character(const std::string& name) : name(name) {
	std::cout	<< "Character parameterized constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = 0;
}

Character::Character(const Character& other) {
	std::cout	<< "Character copy constructor called" << std::endl;
	if (this != &other)
		*this = other;
}

Character& Character::operator=(const Character& other) {
	if (this != &other)
	{
		this->name = other.name;
		
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
			{
				delete (inventory[i]);
			}
			this->inventory[i] = 0;
			if (other.inventory[i])
				this->inventory[i] = other.inventory[i]->clone();
			else
				this->inventory[i] = 0;
		}
	}
	return (*this);
}

Character::~Character() {
	std::cout	<< "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = 0;
}

const std::string&	Character::getName() const {
	return (this->name);
}

void	Character::equip(AMateria* m) {
	if (!m)
		return ;

	for (int i = 0; i < 4; i++)
	{
		inventory[i] = m;
		std::cout	<< name << " equipped " << m->getType() << " in slot " << i << std::endl;
		return ;
	}
	std::cout	<< name << "inventory full, couldn't store AMateria" << std::endl;
}

void	Character::unequip(int idx) {
	if (idx < 0 || idx > 4)
		return ;
	if (!inventory[idx])
		std::cout	<< "No AMateria equiped in this slot yet..." << std::endl;
	
	std::cout << name << " unequipped " << inventory[idx]->getType() << " from slot " << idx << std::endl;
	inventory[idx] = 0;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 4)
		return ;
	if (!inventory[idx])
		std::cout	<< "No AMateria equiped in this slot yet..." << std::endl;
	inventory[idx]->use(target);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jdebrull <jdebrull@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 13:36:28 by Jdebrull          #+#    #+#             */
/*   Updated: 2025/10/28 12:21:34 by Jdebrull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
		Animal();
		Animal(const std::string& type);
		Animal(const Animal& other);
		Animal&	operator=(const Animal& other);
		virtual	~Animal();
		
		virtual void	makeSound() const;
		std::string		getType() const;

	protected:
		std::string type;

};

#endif
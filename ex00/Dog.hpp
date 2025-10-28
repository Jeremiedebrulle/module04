/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jdebrull <jdebrull@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 13:39:07 by Jdebrull          #+#    #+#             */
/*   Updated: 2025/10/27 16:21:49 by Jdebrull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	public: 
		Dog();
		Dog(const std::string& type);
		Dog(const Dog& other);
		Dog&	operator=(const Dog& other);
		~Dog();
		
		void	makeSound() const;
};

#endif
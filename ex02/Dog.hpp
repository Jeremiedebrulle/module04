/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jdebrull <jdebrull@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 13:39:07 by Jdebrull          #+#    #+#             */
/*   Updated: 2025/10/29 13:14:31 by Jdebrull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	public: 
		Dog();
		Dog(const std::string& type);
		Dog(const Dog& other);
		Dog&	operator=(const Dog& other);
		~Dog();
		
		virtual void		makeSound() const;
		void				setIdea(int i, const std::string& idea);
		const std::string	getIdea(int i) const;

	private:
		Brain* brain;
};

#endif 
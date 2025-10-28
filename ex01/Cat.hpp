/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jdebrull <jdebrull@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 13:39:38 by Jdebrull          #+#    #+#             */
/*   Updated: 2025/10/28 14:14:02 by Jdebrull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public: 
		Cat();
		Cat(const std::string& type);
		Cat(const Cat& other);
		Cat&	operator=(const Cat& other);
		~Cat();
		
		void	makeSound() const;
		void	setIdea(int i, const std::string& idea);

	private:
		Brain* brain;
};

#endif
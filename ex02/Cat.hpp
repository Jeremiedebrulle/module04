/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jdebrull <jdebrull@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 13:39:38 by Jdebrull          #+#    #+#             */
/*   Updated: 2025/10/29 13:19:31 by Jdebrull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	public: 
		Cat();
		Cat(const std::string& type);
		Cat(const Cat& other);
		Cat&	operator=(const Cat& other);
		~Cat();

		void				makeSound() const;
		void				setIdea(int i, const std::string& idea);
		const std::string	getIdea(int i) const;

	private:
		Brain* brain;
};

#endif
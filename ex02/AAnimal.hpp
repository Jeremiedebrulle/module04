/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jdebrull <jdebrull@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:09:51 by Jdebrull          #+#    #+#             */
/*   Updated: 2025/10/29 13:14:39 by Jdebrull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{
	public:
		AAnimal();
		AAnimal(const std::string& type);
		AAnimal(const AAnimal& other);
		AAnimal&	operator=(const AAnimal& other);
		virtual		~AAnimal();

		virtual void	makeSound() const = 0;
		std::string		getType() const;

	protected:
		std::string type;
};

#endif
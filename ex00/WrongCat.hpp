/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jdebrull <jdebrull@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:39:49 by Jdebrull          #+#    #+#             */
/*   Updated: 2025/10/28 12:13:38 by Jdebrull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public: 
		WrongCat();
		WrongCat(const std::string& type);
		WrongCat(const WrongCat& other);
		WrongCat&	operator=(const WrongCat& other);
		~WrongCat();
		
		void	makeSound() const;
};

#endif
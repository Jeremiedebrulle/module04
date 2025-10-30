/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jdebrull <jdebrull@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:58:52 by Jdebrull          #+#    #+#             */
/*   Updated: 2025/10/29 17:17:33 by Jdebrull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_CPP

# include <iostream>

class AMateria
{
	public:
		AMateria();
		AMateria(const std::string& type);

		virtual AMateria*	clone() const = 0;
		virtual	void		use(ICharacter& target);

	protected:

	private:
		std::string	type;
};

#endif
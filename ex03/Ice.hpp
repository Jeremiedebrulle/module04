/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdebrull <jdebrull@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 23:55:57 by jdebrull          #+#    #+#             */
/*   Updated: 2025/10/31 00:11:53 by jdebrull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const std::string& type);
		Ice(const Ice& other);
		Ice& operator=(const Ice& other);
		virtual ~Ice();

		AMateria*	clone() const;
		void		use(ICharacter& target);

};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdebrull <jdebrull@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 00:17:20 by jdebrull          #+#    #+#             */
/*   Updated: 2025/10/31 00:17:47 by jdebrull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const std::string& type);
		Cure(const Cure& other);
		Cure& operator=(const Cure& other);
		virtual ~Cure();

		AMateria*	clone() const;
		void		use(ICharacter& target);

};

#endif
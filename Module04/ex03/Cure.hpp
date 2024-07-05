/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:42:09 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/05 12:49:51 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {

public:
	Cure(  );
	Cure( const Cure & src );
	~Cure(  );

	Cure & operator=( const Cure & rhs );

	AMateria *	clone(  ) const;
	void		use( ICharacter& target );

};

#endif
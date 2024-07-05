/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:38:26 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/05 12:09:52 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {

public:
	Ice(  );
	Ice( const Ice & src );
	~Ice(  );

	Ice &	operator=( const Ice & rhs );

	AMateria *	clone(  ) const;
	void		use( ICharacter& target );

};

#endif
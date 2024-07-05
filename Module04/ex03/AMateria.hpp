/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:47:09 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/05 14:48:58 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"
#include <string>
#include <iostream>

class ICharacter;

class AMateria {

protected:
	std::string	_type;

public:
	AMateria(  );
	AMateria( const AMateria & src );
	AMateria( std::string const & type );
	virtual ~AMateria(  );

	AMateria &	operator=( const AMateria & rhs );

	std::string const & getType() const; //Returns the materia type
	void				setType( std::string type );
	virtual AMateria* 	clone() const = 0;
	virtual void 		use( ICharacter& target );

};

#endif
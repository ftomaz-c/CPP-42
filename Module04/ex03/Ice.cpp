/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:40:26 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/13 18:00:40 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(  )  : AMateria( "ice" ) {
	std::cout << "Ice Default constructor called" << std::endl;
}

Ice::Ice( const Ice & src ) : AMateria( src ) {
	std::cout << "Ice Copy constructor called" << std::endl;
	return ;
}

Ice &	Ice::operator=( const Ice & rhs ) {
	if ( this != &rhs ) {
		AMateria::operator=(rhs);
		_type = rhs._type;
	}
	return ( *this );
}

Ice::~Ice() {
	std::cout << "Ice destructor called" << std::endl;
	return ;

}

void	Ice::use( ICharacter& target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}

AMateria *	Ice::clone(  ) const {

	return (new Ice(*this));
}

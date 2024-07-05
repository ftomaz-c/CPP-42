/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:40:26 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/05 12:11:19 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(  ) {
	std::cout << "Ice Default constructor called" << std::endl;
	_type = "ice";
	return ;
}

Ice::Ice( const Ice & src ) : AMateria( src ) {
	*this = src;
	return ;
}

Ice &	Ice::operator=( const Ice & rhs ) {
	if ( this != &rhs ) {
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

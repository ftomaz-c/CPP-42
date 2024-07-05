/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:47:34 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/05 12:49:33 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(  ) {
	std::cout << "Cure default constructor called" << std::endl;
	_type = "cure";
	return ;
}

Cure::Cure( const Cure & src ) : AMateria( src ) {
	std::cout << "Cure copy constructor called" << std::endl;
	*this = src;
	return ;
}

Cure::~Cure(  ) {
	std::cout << "Cure destructor called" << std::endl;
}

Cure &	Cure::operator=( const Cure & rhs ) {
	if ( this != &rhs ) {
		_type = rhs._type;
	}
	return ( *this );
}

void	Cure::use( ICharacter& target ) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	return ;
}

AMateria *	Cure::clone(  ) const {
	return (new Cure(*this));
}
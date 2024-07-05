/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:23:48 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/05 12:27:28 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(  ) : _type("") {
	std::cout << "Materia constructor called" << std::endl;
	return ;
}

AMateria::AMateria( const AMateria & src ) {
	std::cout << "Materia copy constructor called" << std::endl;
	*this = src;
	return ;
}

AMateria::AMateria( std::string const & type ) : _type(type) {
	std::cout << _type << " constructor called" << std::endl;
	return ;
}

AMateria::~AMateria(  ) {
	return ;
}

AMateria &	AMateria::operator=( const AMateria & rhs ) {
	if ( this != &rhs ) {
		_type = rhs._type;
	}
	return (*this);
}

std::string const &	AMateria::getType() const {
	return ( _type );
}

void	AMateria::setType( std::string type ) {
	_type = type;
}

void	AMateria::use(ICharacter& target) {
	std::cout << _type << " used on " << target.getName() << std::endl;
	return ;
}
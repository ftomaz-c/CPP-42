/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:24:25 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/04 16:29:04 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

std::string	AAnimal::getType(  ) const {
	return ( type );
}

AAnimal &	AAnimal::operator=( const AAnimal & rhs ) {
	if ( this != &rhs ) {
		type = rhs.type;
	}
	return ( *this );
}

AAnimal::AAnimal( const AAnimal & src ) {
	std::cout << "AAnimal copy constructor called" << std::endl;
	type = src.type;
}

AAnimal::AAnimal(  ) : type( "" ) {
	std::cout << "Default AAnimal constructor called" << std::endl;
}

AAnimal::~AAnimal(  ) {
	std::cout << "AAnimal destructor called" << std::endl;
}
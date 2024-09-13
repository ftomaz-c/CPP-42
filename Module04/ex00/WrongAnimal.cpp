/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 12:22:59 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/13 12:27:21 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

void	WrongAnimal::makeSound(  ) const {
	std::cout << "???" << std::endl;
}

std::string	WrongAnimal::getType(  ) const {
	return ( type );
}

WrongAnimal &	WrongAnimal::operator=( const WrongAnimal & rhs ) {
	if ( this != &rhs ) {
		this->type = rhs.type;
	}
	return ( *this );
}

WrongAnimal::WrongAnimal( const WrongAnimal & src ) : type(src.type) {
	std::cout << "Wrong animal copy constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(  ) : type( "" ) {
	std::cout << "Default Wrong Animal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(  ) {
	std::cout << "Wrong Animal destructor called" << std::endl;
}

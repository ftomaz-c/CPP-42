/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:24:25 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/13 13:34:27 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void	Animal::makeSound(  ) const {
	std::cout << "???" << std::endl;
}

std::string	Animal::getType(  ) const {
	return ( type );
}

Animal &	Animal::operator=( const Animal & rhs ) {
	if ( this != &rhs ) {
		type = rhs.type;
	}
	return ( *this );
}

Animal::Animal( const Animal & src ) : type( src.type ){
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::Animal(  ) : type( "" ) {
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::~Animal(  ) {
	std::cout << "Animal destructor called" << std::endl;
}
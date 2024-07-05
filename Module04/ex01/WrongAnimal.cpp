/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 12:22:59 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/02 12:28:46 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

void	WrongAnimal::makeSound(  ) const {
	std::cout << "???" << std::endl;
	return ;
}

std::string	WrongAnimal::getType(  ) const {
	return ( type );
}

WrongAnimal &	WrongAnimal::operator=( const WrongAnimal & rhs ) {
	if ( this != &rhs ) {
		
	}
	return ( *this );
}

WrongAnimal::WrongAnimal( WrongAnimal & src ) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
	return ;
}

WrongAnimal::WrongAnimal(  ) : type( "" ) {
	std::cout << "Default Animal constructor called" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal(  ) {
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

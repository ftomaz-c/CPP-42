/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:24:25 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/03 16:44:36 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void	Animal::makeSound(  ) const {
	std::cout << "???" << std::endl;
	return ;
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

Animal::Animal( const Animal & src ) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
	return ;
}

Animal::Animal(  ) : type( "" ) {
	std::cout << "Default Animal constructor called" << std::endl;
	return ;
}

Animal::~Animal(  ) {
	std::cout << "Animal destructor called" << std::endl;
	return ;
}
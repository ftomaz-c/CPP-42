/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:40:13 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/02 12:16:44 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void	Dog::makeSound() const {
	std::cout << "woof woof woof" << std::endl;
	return ;
}

Dog &	Dog::operator=( const Dog & rhs ) {
	if ( this != &rhs ) {
		type = rhs.type;
	}
	return ( *this );
}

Dog::Dog( Dog & src ) : Animal( src ) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
	return ;
}

Dog::Dog(  ) {
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
	return ;
}

Dog::~Dog(  ) {
	std::cout << "Dog destructor called" << std::endl;
	return ;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:40:13 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/13 12:20:46 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void	Dog::makeSound() const {
	std::cout << "woof woof woof" << std::endl;
	return ;
}

Dog &	Dog::operator=( const Dog & rhs ) {
	if ( this != &rhs ) {
		Animal::operator=(rhs);
	}
	return ( *this );
}

Dog::Dog( const Dog & src ) : Animal( src ) {
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::Dog(  ) : Animal(  ) {
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
}

Dog::~Dog(  ) {
	std::cout << "Dog destructor called" << std::endl;
}
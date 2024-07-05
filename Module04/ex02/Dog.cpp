/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:40:13 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/04 16:41:27 by ftomazc          ###   ########.fr       */
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
		this->_brain = new Brain( *rhs._brain );
	}
	return ( *this );
}

Dog::Dog( const Dog & src ) : AAnimal( src ) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
	return ;
}

Dog::Dog(  ) {
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
	_brain = new Brain();
	return ;
}

Dog::~Dog(  ) {
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
	return ;
}

Brain	*Dog::getBrain (  ) const {
	return (_brain);
}
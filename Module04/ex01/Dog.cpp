/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:40:13 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/13 16:14:50 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void	Dog::makeSound() const {
	std::cout << "woof woof woof" << std::endl;
}

Dog &	Dog::operator=( const Dog & rhs ) {
	if ( this != &rhs ) {
		Animal::operator=(rhs);
		if (_brain)
			delete _brain;
		_brain = new Brain( *rhs._brain );
	}
	return ( *this );
}

Dog::Dog( const Dog & src ) : Animal( src ), _brain(new Brain(*src._brain)) {
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::Dog(  ) : Animal( ), _brain(new Brain()) {
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
}

Dog::~Dog(  ) {
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

Brain	*Dog::getBrain (  ) const {
	return (_brain);
}
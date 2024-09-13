/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:46:09 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/13 16:15:01 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void	Cat::makeSound(  ) const {
	std::cout << "purrrrrrrrrrrrrrrrrrr" << std::endl;
}

Cat &	Cat::operator=( const Cat & rhs ) {
	if ( this != &rhs ) {
		Animal::operator=( rhs );
		if (_brain)
			delete _brain;
		_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

Cat::Cat ( const Cat & src ) : Animal( src ), _brain(new Brain(*src._brain)) {
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::Cat(  ) : Animal(  ), _brain(new Brain()) {
	std::cout << "Cat default constructor called" << std::endl;
	type = "Cat";
}

Cat::~Cat(  ) {
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

Brain	*Cat::getBrain (  ) const {
	return (_brain);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:46:09 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/02 12:34:29 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void	Cat::makeSound(  ) const {
	std::cout << "purrrrrrrrrrrrrrrrrrr" << std::endl;
}

Cat &	Cat::operator=( const Cat & rhs ) {
	if ( this != &rhs ) {
		type = rhs.type;
	}
	return (*this);
}

Cat::Cat ( Cat & src ) : Animal( src ) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	return ;
}

Cat::Cat(  ) {
	std::cout << "Cat default constructor called" << std::endl;
	type = "Cat";
	return ;
}

Cat::~Cat(  ) {
	std::cout << "Cat destructor called" << std::endl;
	return ;
}
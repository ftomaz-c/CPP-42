/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 12:24:02 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/02 12:34:34 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

void	WrongCat::makeSound(  ) const {
	std::cout << "cof cof" << std::endl;
}

WrongCat &	WrongCat::operator=( const WrongCat & rhs ) {
	if ( this != &rhs ) {
		type = rhs.type;
	}
	return (*this);
}

WrongCat::WrongCat ( WrongCat & src ) : WrongAnimal( src ) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	return ;
}

WrongCat::WrongCat(  ) {
	std::cout << "Cat default constructor called" << std::endl;
	type = "WrongCat";
	return ;
}

WrongCat::~WrongCat(  ) {
	std::cout << "Cat destructor called" << std::endl;
	return ;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 12:24:02 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/13 12:25:05 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

void	WrongCat::makeSound(  ) const {
	std::cout << "cof cof" << std::endl;
}

WrongCat &	WrongCat::operator=( const WrongCat & rhs ) {
	if ( this != &rhs ) {
		WrongAnimal::operator=(rhs);
	}
	return (*this);
}

WrongCat::WrongCat ( const WrongCat & src ) : WrongAnimal( src ) {
	std::cout << "Wrong cat copy constructor called" << std::endl;
}

WrongCat::WrongCat(  ) : WrongAnimal(  ) {
	std::cout << "Wrong cat default constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::~WrongCat(  ) {
	std::cout << "Wrong cat destructor called" << std::endl;
}
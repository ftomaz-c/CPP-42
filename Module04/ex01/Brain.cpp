/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:09:32 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/03 16:45:02 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <string>

Brain &	Brain::operator=( const Brain & rhs) {
	if ( this != &rhs ) {
		for (int i = 0; i < 100; i++) {
			_ideas[i] = rhs._ideas[i];
		}
	}
	return ( *this );
}

Brain::Brain ( const Brain & src ) {
	*this = src;
	return ;
}

Brain::Brain(  ) {
	std::cout << "Brain default constructor called" << std::endl;
	return ;
}

Brain::~Brain(  ) {
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

void	Brain::setIdea( int index, std::string idea ) {
	if (index >= 0 && index < 100) {
		_ideas[index] = idea;
	}
	else
		std::cerr << "There are only 100 ideas available!" << std::endl;
	return ;
}

std::string	Brain::getIdea( int index ) const {
	if ( index >= 0 && index < 100 ) {
		if ( !_ideas[index].empty() ) {
			return (_ideas[index]);
		} else {
			return ("");
		}
	}
	std::cerr << "There are only 100 ideas available!" << std::endl;
	return ( "" );
}
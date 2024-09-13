/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 12:51:15 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/13 17:43:22 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource(  ) {

	std::cout << "MateriaSource Default Constructor called" << std::endl;
	for ( int i = 0; i < 4; i++ ) {
		_materias[i] = NULL;
	}
}

MateriaSource::MateriaSource( const MateriaSource & src ) {

	std::cout << "MateriaSource Copy Constructor called" << std::endl;
	*this = src;
}

MateriaSource::~MateriaSource(  ) {

	std::cout << "MateriaSource Destructor called" << std::endl;
	for ( int i = 0; i < 4; i++ )
		delete _materias[i];
}

MateriaSource &	MateriaSource::operator=( const MateriaSource & rhs ) {
		
	if ( this != &rhs ) {
		for ( int i = 0; i < 4; i++ ) {
			if ( _materias[i] )
			{
				delete _materias[i];
				_materias[i] = NULL;
			}
		}
		for ( int i = 0; i < 4; i++ ) {
			if ( rhs._materias[i] )
				_materias[i] = rhs._materias[i]->clone();
			else
				_materias[i] = NULL;
		}
	}
	return ( *this );
}

void	MateriaSource::learnMateria( AMateria *m ) {

	for ( int i = 0; i < 4; i++ ) {
		if ( !_materias[i] ) {
			_materias[i] = m;
			return ;
		}
	}
	std::cout << "Materia not learned" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type) {

	for ( int i = 0; i < 4; i++ ) {
		if ( _materias[i] && _materias[i]->getType() == type) {
			return (_materias[i]->clone());
		} 
	}
	return (NULL);
}

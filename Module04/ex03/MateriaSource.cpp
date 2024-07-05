/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 12:51:15 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/05 14:56:33 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource(  ) {
	for ( int i = 0; i < 4; i++ ) {
		_materias[i] = NULL;
	}
	return ;
}

MateriaSource::MateriaSource( const MateriaSource & src ) {
	*this = src;
	return ;
}

MateriaSource::~MateriaSource(  ) {
	for ( int i = 0; i < 4; i++ ) {
		delete _materias[i];
	}
	return ;
}

MateriaSource &	MateriaSource::operator=( const MateriaSource & rhs ) {
	if ( this != &rhs ) {
		for ( int i = 0; i < 4; i++ ) {
			_materias[i] = rhs._materias[i];
		}
	}
	return ( *this );
}

void	MateriaSource::learnMateria( AMateria *m ) {
	
	bool	learned = false;
	for ( int i = 0; i < 4; i++ ) {
		if ( !_materias[i] ) {
			_materias[i] = m;
			learned = true;
			break ;
		}
	}
	if (!learned) {
		std::cout << "Materia not learned" << std::endl;
	}
	return ;
}

AMateria*	MateriaSource::createMateria(std::string const & type) {

	for ( int i = 0; i < 4; i++ ) {
		if ( _materias[i] && _materias[i]->getType() == type) {
			return (_materias[i]->clone());
		} 
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:13:18 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/13 18:16:20 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(  ) {

	std::cout << "Character default contructor called" << std::endl;
	for ( int i = 0; i < 4; i++ ) {
		_inventory[i] = NULL;
	}
}

Character::Character( const Character & src ) : _name( src._name ) {

	std::cout << "Character copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if ( src._inventory[i] )
			_inventory[i] = src._inventory[i]->clone(  );
		else
			_inventory[i] = NULL;
	}
}

Character::Character(std::string name) : _name(name) {

	std::cout << "Character " << _name << " construtor called" << std::endl;
	for ( int i = 0; i < 4; i++ ) {
		_inventory[i] = NULL;
	}
}

Character::~Character(  ) {

	std::cout << "Character destructor called" << std::endl;
	for ( int i = 0; i < 4; i++ ) {
		if ( _inventory[i] ) {
			delete _inventory[i];
		}
	}
}

Character &	Character::operator=( const Character & rhs ) {

	if ( this != &rhs ) {
		_name = rhs._name;
		for ( int i = 0; i < 4; i++ ) {
			if ( _inventory[i] )
				delete _inventory[i];
			if ( rhs._inventory[i] )
				_inventory[i] = rhs._inventory[i]->clone(  );
			else
				_inventory[i] = NULL;
		}
	}
	return ( *this );
}

const std::string &	Character::getName(  ) const {

	return ( _name );
}

void	Character::equip(AMateria* m) {

	if (!m)
		return ;
	for ( int i = 0; i < 4; i++ ) {
		if ( !_inventory[i] ) {
			_inventory[i] = m;
			std::cout << "Character " << _name << " equipped with " << m->getType() << std::endl;
			return ;
		}
	}
	std::cout << "Inventory is full. Cannot equip more Materias" << std::endl;
}

void	Character::unequip( int idx ) {

	if ( idx >= 0 && idx < 4 && _inventory[idx] ) {
		std::cout << "Character " << _name << " unequipped " << _inventory[idx]->getType() << std::endl;
		_inventory[idx] = NULL;
		return ;
	}
	std::cout << "Slot is empty." << std::endl;
}

void	Character::use( int idx, ICharacter & target) {
	if ( idx >= 0 && idx < 4 && _inventory[idx] )
		_inventory[idx]->use( target );
	else
		std::cout << "Slot is empty" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:13:18 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/05 12:35:07 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(  ) {
	std::cout << "Character default contructor called" << std::endl;
	return ;
}

Character::Character( const Character & src ) : ICharacter( src ) {
	*this = src;
	return ;
}

Character::Character(std::string name) : _name(name) {
	std::cout << "Character " << _name << " construtor called" << std::endl;
	for ( int i = 0; i < 4; i++ ) {
		_inventory[i] = NULL;
	}
	return ;
}

Character::~Character(  ) {
	std::cout << "Character destructor called" << std::endl;
	for ( int i = 0; i < 4; i++ ) {
		if ( this->_inventory[i] ) {
			delete this->_inventory[i];
		}
	}
	return ;
}

Character &	Character::operator=( const Character & rhs ) {
	if ( this != &rhs ) {
		this->_name = rhs._name;
	}
	return ( *this );
}

const std::string &	Character::getName(  ) const {
	return ( _name );
}

void	Character::equip(AMateria* m) {

	bool	equipped = false;
	for ( int i = 0; i < 4; i++ ) {
		if (!_inventory[i]) {
			_inventory[i] = m;
			std::cout << "Character " << _name << " equipped with " << m->getType() << std::endl;
			equipped = true;
			break;
		}
	}
	if (!equipped) {
		std::cout << "Inventory is full" << std::endl;
	}
	return ;
}

void	Character::unequip( int idx ) {
	if ( _inventory[idx] ) {
		std::cout << "Character " << _name << " unequipped " << _inventory[idx]->getType() << std::endl;
		delete _inventory[idx];
		_inventory[idx] = NULL;
	} else {
		std::cout << "Slot is empty." << std::endl;
	}
	return ;
}

void	Character::use( int idx, ICharacter & target) {
	if ( _inventory[idx] ) {
		_inventory[idx]->use( target );
	} else {
		std::cout << "Slot is empty" << std::endl;
	}
	
	return ;
}
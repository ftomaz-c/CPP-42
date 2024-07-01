/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 17:59:26 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/30 19:07:49 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	ClapTrap::beRepaired( unsigned int amount ) {
	std::cout << _name << " repaired by " << amount << "!" << std::endl;
	_hitPoints += amount;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	std::cout << _name << " took " << amount << " of damage!" << std::endl;
	if ( _hitPoints > (int)amount ) {
		_hitPoints -= amount;
	} else {
		_hitPoints = 0;
		std::cout << _name << " is down!" << std::endl;
	}
	return ;
}

void	ClapTrap::attack( const std::string & target ) {
	if ( _energyPoints > 0 ) {
		std::cout << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	} else {
		std::cout << "ClapTrap " << _name << " is out of energy and cannot attack!" << std::endl;
	}
}

ClapTrap::ClapTrap( std::string name ) 
	: _name( name ), _hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 0 ) {
	std::cout << name << " initialized: Feel free to mingle with, um... nobody.";
	std::cout << " Uh -- there's, um, some pizza. If you're hungry." << std::endl;
	return ;
}

ClapTrap::ClapTrap( ClapTrap & src ) {
	std::cout << "ClapTrap cloned: \"Aaaaaaand... OPEN!\"" << std::endl;
	*this = src;
	return ;
}

ClapTrap::ClapTrap(  ) 
	: _name( "ClapTrap" ), _hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 0 ) {
	std::cout << "ClapTrap initialized: \"I am a CL4P-TP steward bot, but my";
	std::cout << "friends call me Claptrap! Or they would, if any of them were";
	std::cout << " still alive, or have existed in the first place!\"" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(  ) {
	std::cout << "ClapTrap shutdown: \"I AM GOING TO T-BAG YOUR CORPSE!\"" << std::endl;
	return ;
}

ClapTrap &	ClapTrap::operator=( const ClapTrap & rhs ) {
	if ( this != &rhs ) {
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return (*this) ;
}

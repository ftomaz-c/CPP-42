/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:57:22 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/01 18:01:27 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap is now in Gate keeper mode!" << std::endl;
	return ;
}

void	ScavTrap::attack( const std::string & target ) {
	if ( _energyPoints > 0 ) {
		std::cout << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	} else {
		std::cout << "ScavTrap " << _name << " is out of energy and cannot attack!" << std::endl;
	}
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name ) {
	std::cout << name << " is ready to serve!" << std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	return ;
}

ScavTrap &	ScavTrap::operator=( const ScavTrap & rhs ) {
	if ( this != &rhs ) {
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return ( *this );
}

ScavTrap::ScavTrap( const ScavTrap & src ) : ClapTrap( src ) {
	*this = src;
	return ;
}

ScavTrap::ScavTrap(  ) {
	std::cout << "ScavTrap is ready to serve!" << std::endl;
	_name = "ScavTrap";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	return ;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap perishes!" << std::endl;
	return ;
}
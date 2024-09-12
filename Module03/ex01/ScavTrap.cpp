/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:57:22 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/12 00:03:43 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::guardGate() {
	if ( _hitPoints > 0 && _energyPoints > 0 ) {
		std::cout << _name << " has entered Gatekeeper mode!\n" << std::endl;
		std::cout << "\t - FOR REDBELLY AND ALL THAT IS CHAOTIC!" << std::endl;
		std::cout << "\t No one shall pass! Unless they bribe me with pizza... -\n" << std::endl;
	} else {
		std::cout << "ScavTrap " << _name << " is too weak to guard the gate!\n" << std::endl;
		std::cout << "\t- ZZZZZZZZZZZzzzzzzzzzzzzz! -\n" << std::endl;
	}
}

void ScavTrap::attack( const std::string & target ) {
	if ( _hitPoints > 0 && _energyPoints > 0 ) {
		std::cout << _name << " launches a wild attack on " << target << ", causing " << _attackDamage << " points of damage! Take that, puny mortal!" << std::endl;
		_energyPoints--;
	} else
		std::cout << _name << " is too drained to attack! Maybe after a snack..." << std::endl;
}


ScavTrap::ScavTrap( std::string name ) : ClapTrap( name ) {
	std::cout << name << " has entered the battlefield, ready to wreak havoc!" << std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
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
	std::cout << "Default ScavTrap is ready to serve!" << std::endl;
	_name = "ScavTrap";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	return ;
}

ScavTrap::~ScavTrap(  ) {
	std::cout << "ScavTrap " << _name << " has perished... but I'll be back! (Maybe...)" << std::endl;
}

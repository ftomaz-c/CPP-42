/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:35:08 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/02 10:05:40 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap &	DiamondTrap::operator=( const DiamondTrap & rhs ) {
	if (this != &rhs) {
		_name = rhs._name + "_clap_name";
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return ( *this );
}

void	DiamondTrap::whoAmI() {
	std::cout << "My name is " << name << " and I'm originated from the ClapTrap ";
	std::cout << _name << "." << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name + "_clap_name"), name(name) {
	_name = name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	return ;
}

void	DiamondTrap::attack( const std::string& target ) {
	ScavTrap::attack( target );
}

DiamondTrap::DiamondTrap( DiamondTrap & src ) : ClapTrap( src ), ScavTrap( src ), FragTrap( src ) {
	*this = src;
	return ;
}

DiamondTrap::DiamondTrap(  ) {
	name = "DiamondTrap";
	_name = "DiamondTrap_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	return ;
}

DiamondTrap::~DiamondTrap(  ) {
	std::cout << "D1MND-TP is down: \"D1MND-TP WILL NEVER DIE!!\"" << std::endl;
	return ;
}
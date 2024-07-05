/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:09:25 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/02 09:48:08 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void	FragTrap::highFivesGuys ( void ) {
	std::cout << "FragTrap " << _name << " high fives everyone!" << std::endl;
	return ;
}


void	FragTrap::attack( const std::string & target ) {
	if ( _energyPoints > 0 ) {
		std::cout << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	} else {
		std::cout << "ScavTrap " << _name << " is out of energy and cannot attack!" << std::endl;
	}
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name ) {
	std::cout << "A Fragmented Fragtrap " << name << " appeared!" << std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	return ;
}

FragTrap &	FragTrap::operator=( const FragTrap & rhs ) {
	if ( this != &rhs ) {
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return ( *this );
}

FragTrap::FragTrap( FragTrap & src ) : ClapTrap( src ) {
	std::cout << "A copy clone of FragTrap appeared!" << std::endl;
	*this = src;
	return ;
}

FragTrap::FragTrap( ) {
	std::cout << "FragTrap Default is here babyyyyy!" << std::endl;
	_name = "FragTrap";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	return ;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap will return!" << std::endl;
	return ;
}
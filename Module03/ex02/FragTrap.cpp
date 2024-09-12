/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:09:25 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/12 00:10:14 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void	FragTrap::highFivesGuys ( void ) {
	if ( _hitPoints > 0 && _energyPoints > 0 ) {
		std::cout << "FragTrap " << _name << " enthusiastically shouts: \n" << std::endl;
		std::cout << "\t - High fives, everyone! Don't leave me hanging! -\n" << std::endl;
	} else {
		std::cout << "FragTrap " << _name << " attempts to raise a hand but... sadly waves his broken arm. 'No high fives... today...'" << std::endl;
	}
}


void FragTrap::attack( const std::string & target ) {
	if ( _energyPoints > 0 ) {
		std::cout << _name << " wildly attacks " << target << ", dealing " << _attackDamage << " points of damage! Boom, baby!" << std::endl;
		_energyPoints--;
	} else
		std::cout << _name << " tries to attack " << target << " but runs out of energy mid-swing... 'I'm too tired for this!'" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap( name ) {
	std::cout << "A Fragmented Fragtrap " << name << " appeared!" << std::endl;
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
	std::cout << "A clone of FragTrap appeared!" << std::endl;
	*this = src;
	return ;
}

FragTrap::FragTrap( ) {
	std::cout << "FragTrap is here babyyyyy!" << std::endl;
	_name = "FragTrap";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	return ;
}

FragTrap::~FragTrap() {
	std::cout << _name << " dramatically yells: \n" << std::endl;
	std::cout << "\t - I'll be back! FragTrap never truly dies! -\n" << std::endl;	return ;
}
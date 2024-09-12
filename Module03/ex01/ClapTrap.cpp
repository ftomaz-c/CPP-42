/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 17:59:26 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/12 11:43:56 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void ClapTrap::beRepaired( unsigned int amount ) {
	if ( _energyPoints > 0 && _hitPoints > 0 ) {
		_energyPoints--;
		if ( amount == 0 )
			std::cout << _name << " tried to repair itself but... nothing happened! Great job, Claptrap!" << std::endl;
		else {
			std::cout << _name << " repaired by " << amount << "!" << std::endl;
			_hitPoints += amount;
		}
	} else
		std::cout << _name << " failed to repair itself... maybe try duct tape next time!" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount ) {
	std::cout << _name << " just took " << amount << " points of damage!" << std::endl;
	if ( !amount )
		std::cout << "\t - LOL What was that!? -" << std::endl;
	else if ( _hitPoints > (int)amount ) {
		_hitPoints -= amount;
		std::cout << "\t - Ouch, that hurts! -" << std::endl;
		std::cout << _name << " is still standing! Barely..." << std::endl;
	} else {
		_hitPoints = 0;
		std::cout << _name << " is down!" << std::endl;
		std::cout << "\t- Somebody call a repair bot! -" << std::endl;
	}
	return;
}

void	ClapTrap::attack( const std::string & target ) {
	if ( _hitPoints > 0 && _energyPoints > 0 ) {
		_energyPoints--;
		std::cout << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage! Actually it was more like a tickle! " << std::endl;
	} else {
		std::cout << "ClapTrap " << _name << " is too tired to attack! Maybe after a quick recharge nap?" << std::endl;
	}
	
}

ClapTrap::ClapTrap( std::string name ) 
	: _name( name ), _hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 0 ) {
	std::cout << "# " << name << " initialized:" << std::endl;
	std::cout << "\t - Feel free to mingle with, um... nobody.\n";
	std::cout << "\t Uh -- there's, um, some pizza. If you're hungry. -" << std::endl;
	return ;
}

ClapTrap::ClapTrap( const ClapTrap & src ) {
	std::cout << "# ClapTrap cloned:" << std::endl;
	std::cout << "\t - Aaaaaaand... OPEN! -" << std::endl;
	*this = src;
	return ;
}

ClapTrap::ClapTrap(  ) 
	: _name( "ClapTrap" ), _hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 0 ) {
	std::cout << "# ClapTrap initialized:" << std::endl;
	std::cout << "\t - I am a CL4P-TP steward bot, but my friends call me Claptrap!\n";
	std::cout << "\t Or they would, if any of them were";
	std::cout << " still alive, or have existed in the first place! -" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(  ) {
	if ( !_name.empty() )
		std::cout << "# " << _name << " shutdown:" << std::endl;
	else
		std::cout << "# ClapTrap shutdown:" << std::endl;
	std::cout << "\t - I AM GOING TO T-BAG YOUR CORPSE! -" << std::endl;
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

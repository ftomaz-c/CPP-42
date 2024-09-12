/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 17:59:26 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/11 23:45:24 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void ClapTrap::beRepaired( unsigned int amount ) {
	if ( _energyPoints > 0 && _hitPoints > 0 ) {
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
	std::cout << _name << " just took " << amount << " points of damage! Ouch, that hurt!" << std::endl;
	if ( _hitPoints > (int)amount ) {
		_hitPoints -= amount;
		std::cout << _name << " is still standing! Barely..." << std::endl;
	} else {
		_hitPoints = 0;
		std::cout << _name << " is down! Somebody call a repair bot!" << std::endl;
	}
	return;
}

void	ClapTrap::attack( const std::string & target ) {
	if ( _hitPoints > 0 && _energyPoints > 0 ) {
		std::cout << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage! Actually it was more like a tickle! " << _name << " is so funny!" << std::endl;
		_energyPoints--;
	} else {
		std::cout << "ClapTrap " << _name << " is too tired to attack! Maybe after a quick recharge nap?" << std::endl;
	}
	
}

ClapTrap::ClapTrap( std::string name ) 
	: _name( name ), _hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 0 ) {
	std::cout << name << " initialized:\n" << std::endl;
	std::cout << "\t - Feel free to mingle with, um... nobody.\n";
	std::cout << "\t Uh -- there's, um, some pizza. If you're hungry. -\n" << std::endl;
	return ;
}

ClapTrap::ClapTrap( ClapTrap & src ) {
	std::cout << "ClapTrap cloned:\n" << std::endl;
	std::cout << "\t - Aaaaaaand... OPEN! -\n" << std::endl;
	*this = src;
	return ;
}

ClapTrap::ClapTrap(  ) 
	: _name( "ClapTrap" ), _hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 0 ) {
	std::cout << "ClapTrap initialized:\n" << std::endl;
	std::cout << "\t - I am a CL4P-TP steward bot, but my friends call me Claptrap!\n";
	std::cout << "\t Or they would, if any of them were";
	std::cout << " still alive, or have existed in the first place! -\n" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(  ) {
	std::cout << "ClapTrap shutdown:\n" << std::endl;
	std::cout << "\t - I AM GOING TO T-BAG YOUR CORPSE! -\n" << std::endl;
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

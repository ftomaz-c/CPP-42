/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 18:04:00 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/11 23:42:18 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main ( void ) {
	ClapTrap defaultClaptrap;
	ClapTrap clonedClaptrap( defaultClaptrap );
	ClapTrap heroClaptrap( "C-3PO" );
	ClapTrap healerClaptrap( "Baymax" );

	std::cout << "\n--- The adventure begins! ---\n" << std::endl;

	std::cout << "Default ClapTrap encounters a Bandit!" << std::endl;
	defaultClaptrap.attack( "Bandit" );
	defaultClaptrap.takeDamage( 3 );
	defaultClaptrap.beRepaired( 2 );
	std::cout << std::endl;

	std::cout << "Cloned ClapTrap tries its luck against a Skag!" << std::endl;
	clonedClaptrap.attack( "Skag" );
	clonedClaptrap.takeDamage( 5 );
	clonedClaptrap.beRepaired( 0 );
	std::cout << std::endl;

	std::cout << "Hero ClapTrap 'C-3PO' nervously faces a Thresher!" << std::endl;
	heroClaptrap.attack( "Thresher" );
	heroClaptrap.takeDamage( 0 );
	heroClaptrap.beRepaired( 6 );
	std::cout << std::endl;

	std::cout << "Healer ClapTrap 'Baymax' battles a Vault Guardian!" << std::endl;
	healerClaptrap.attack( "Vault Guardian" );
	healerClaptrap.takeDamage( 10 );
	std::cout << "Baymax is not done yet! Repairing..." << std::endl;
	healerClaptrap.beRepaired( 10 );
	std::cout << "Baymax launches a counter-attack!" << std::endl;
	healerClaptrap.attack( "Vault Guardian" );
	std::cout << std::endl;

	std::cout << "--- The adventure ends! ---" << std::endl;
	return ( 0 );
}

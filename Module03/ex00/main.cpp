/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 18:04:00 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/12 12:03:43 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main ( void ) {

	std::cout << "\n\t\t--- Basic Functionality Tests ---\n" << std::endl;
	{
		ClapTrap defaultClaptrap;
		std::cout << "\t\t<<ClapTrap attacks a Bandit>>" << std::endl;
		defaultClaptrap.attack( "Bandit" );
		defaultClaptrap.takeDamage( 3 );
		defaultClaptrap.beRepaired( 2 );
		std::cout << std::endl;

		ClapTrap clonedClaptrap( defaultClaptrap );
		std::cout << "\t\t<<Cloned ClapTrap attacks Skag with 0 Repaired>>" << std::endl;
		clonedClaptrap.attack( "Skag" );
		clonedClaptrap.takeDamage( 5 );
		clonedClaptrap.beRepaired( 0 );
	}
	{
		ClapTrap hero1Claptrap( "Baymax" );
		std::cout << "\t\t<<Baymax attacks Thresher and takes 0 damage>>" << std::endl;
		hero1Claptrap.attack( "Thresher" );
		hero1Claptrap.takeDamage( 0 );
		hero1Claptrap.beRepaired( 6 );
	}
	{
		std::cout << "\n\t\t --- Energy Depletion Test ---\n" << std::endl;
		ClapTrap	hero2ClapTrap( "Optimus Prime" );
		hero2ClapTrap.beRepaired( 1 );
		hero2ClapTrap.beRepaired( 1 );
		hero2ClapTrap.beRepaired( 1 );
		for (int i = 1; i < 11; i++) {
			std::cout << i << ": ";
			hero2ClapTrap.attack( "Thresher" );
		}
	}
	std::cout << "**********" << std::endl;
	{
		std::cout << "\n\t\t --- Heal Mode Test ---\n" << std::endl;
		ClapTrap healerClaptrap( "C-3PO" );
		healerClaptrap.attack( "Vault Guardian" );
		healerClaptrap.takeDamage( 10 );
		healerClaptrap.beRepaired( 10 );
		healerClaptrap.attack( "Vault Guardian" );
	}
	std::cout << "\n\t\t--- All Tests Completed ---" << std::endl;
	return ( 0 );
}

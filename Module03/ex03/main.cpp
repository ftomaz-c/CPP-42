/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 18:04:00 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/05 12:23:14 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main ( void ) {

	ClapTrap	claptrap1("CL4P-TP");
	ScavTrap	scavtrap1("SC4V-TP");
	FragTrap	fragtrap1("FR4G-TP");
	DiamondTrap	diamondtrap1("D1MND_TP");
	
	claptrap1.attack( "Bandit" );
	claptrap1.takeDamage( 3 );
	claptrap1.beRepaired( 5 );
	std::cout << "--------------------" << std::endl << std::endl;

	scavtrap1.attack( "Thresher" );
	scavtrap1.takeDamage( 8 );
	scavtrap1.beRepaired( 10 );
	scavtrap1.guardGate(  );
	std::cout << "--------------------" << std::endl << std::endl;

	fragtrap1.attack( "Vault Guardian" );
	fragtrap1.takeDamage( 10 );
	fragtrap1.beRepaired( 10 );
	fragtrap1.highFivesGuys(  );
	std::cout << "--------------------" << std::endl << std::endl;

	diamondtrap1.attack( "Suicide Zombie" );
	diamondtrap1.takeDamage( 15 );
	diamondtrap1.beRepaired( 15 );
	diamondtrap1.whoAmI(  );
	std::cout << "--------------------" << std::endl << std::endl;
	
	return (0);
}
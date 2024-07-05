/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 18:04:00 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/01 17:31:37 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main ( void ) {
	
	ClapTrap	claptrap1("CL4P-TP");
	ScavTrap	scavtrap1("SC4V-TP");
	FragTrap	fragtrap1("FR4G-TP");
	
	claptrap1.attack( "Bandit" );
	claptrap1.takeDamage( 3 );
	claptrap1.beRepaired( 5 );

	scavtrap1.attack( "Thresher" );
	scavtrap1.takeDamage( 8 );
	scavtrap1.beRepaired( 10 );
	scavtrap1.guardGate(  );

	fragtrap1.attack( "Vault Guardian" );
	fragtrap1.takeDamage( 10 );
	fragtrap1.beRepaired( 10 );
	fragtrap1.highFivesGuys(  );
	
	return (0);
}
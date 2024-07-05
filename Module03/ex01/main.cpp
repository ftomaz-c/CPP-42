/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 18:04:00 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/01 18:08:38 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main ( void ) {
	
	ClapTrap	claptrap1("CL4P-TP");
	ScavTrap	scavtrap1("SC4V-TP");
	
	claptrap1.attack( "Bandit" );
	claptrap1.takeDamage( 3 );
	claptrap1.beRepaired( 5 );

	scavtrap1.attack( "Thresher" );
	scavtrap1.takeDamage( 8 );
	scavtrap1.beRepaired( 10 );
	scavtrap1.guardGate(  );
	return (0);
}
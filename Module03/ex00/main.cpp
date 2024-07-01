/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 18:04:00 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/30 21:13:06 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main ( void ) {
	
	ClapTrap	claptrap1;
	ClapTrap	claptrap2( claptrap1 );
	ClapTrap	claptrap3( "C-3PO" );
	ClapTrap	claptrap4;
	ClapTrap	claptrap5( "Baymax" );

	claptrap4 = claptrap3;
	
	claptrap1.attack( "Bandit" );
	claptrap1.takeDamage( 3 );
	claptrap1.beRepaired( 5 );

	claptrap2.attack( "Skag" );
	claptrap2.takeDamage( 5 );
	claptrap2.beRepaired( 8 );

	claptrap3.attack( "Thresher" );
	claptrap3.takeDamage( 8 );
	claptrap3.beRepaired(10);
	
	claptrap5.attack( "Vault Guardian" );
	claptrap5.takeDamage( 10 );
	claptrap5.beRepaired( 10 );
	return (0);
}
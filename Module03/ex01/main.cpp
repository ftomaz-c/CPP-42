/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 18:04:00 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/12 12:04:33 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	{
		std::cout << "\n\t\t--- Initialization Tests ---\n" << std::endl;
		ClapTrap claptrap1("CL4P-TP");
		ScavTrap scavtrap1("SC4V-TP");

		std::cout << "\n\t\t--- Basic Functionality Tests ---\n" << std::endl;

		std::cout << "\t\t<<CL4P-TP attacks a Bandit!>>" << std::endl;
		claptrap1.attack("Bandit");
		claptrap1.takeDamage(3);
		claptrap1.beRepaired(5);
		std::cout << std::endl;
		std::cout << "\t\t<<SC4V-TP faces a Thresher!>>" << std::endl;
		scavtrap1.attack("Thresher");
		scavtrap1.takeDamage(8);
		scavtrap1.beRepaired(10);

		std::cout << "\n\t\t --- Energy Depletion Test ---\n" << std::endl;
		for (int i = 1; i < 51; ++i) {
			std::cout << i << ": ";
			scavtrap1.attack("Bandit");
		}
		scavtrap1.beRepaired(10);
		scavtrap1.attack("Thresher");

		std::cout << "\n\t\t --- Heal Mode Test ---\n" << std::endl;
		scavtrap1.takeDamage(100);
		scavtrap1.attack("Thresher");
		scavtrap1.beRepaired(10);
		scavtrap1.guardGate();
		scavtrap1.takeDamage(20);

		std::cout << "\n\t\t--- Guard Mode Test ---\n" << std::endl;
		ScavTrap scavtrap2("Gatekeeper");
		scavtrap2.guardGate();
		scavtrap2.takeDamage(90);
		scavtrap2.guardGate();
		scavtrap2.takeDamage(15);
		scavtrap2.guardGate();
		std::cout << std::endl;
	}
	std::cout << "\n\t\t--- All Tests Complete ---" << std::endl;

	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 18:04:00 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/12 00:00:27 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ClapTrap claptrap1("CL4P-TP");
	ScavTrap scavtrap1("SC4V-TP");

	std::cout << "\n--- Basic Functionality Tests ---\n" << std::endl;

	std::cout << "CL4P-TP attacks a Bandit!" << std::endl;
	claptrap1.attack("Bandit");
	claptrap1.takeDamage(3);
	claptrap1.beRepaired(5);

	std::cout << "SC4V-TP faces a Thresher!" << std::endl;
	scavtrap1.attack("Thresher");
	scavtrap1.takeDamage(8);
	scavtrap1.beRepaired(10);

	std::cout << "--- Energy Depletion Test ---" << std::endl;
	for (int i = 0; i < 51; ++i) {
		scavtrap1.attack("Energy Drain Test Dummy");
	}
	std::cout << "SC4V-TP is out of energy and can't attack or repair.\n" << std::endl;
	scavtrap1.beRepaired(10);
	scavtrap1.attack("Thresher");
	std::cout << "SC4V-TP fails to repair or attack without energy.\n" << std::endl;

	std::cout << "--- Health Depletion Test ---" << std::endl;
	scavtrap1.takeDamage(100);
	scavtrap1.attack("Thresher");
	scavtrap1.beRepaired(10);
	scavtrap1.guardGate();
	std::cout << "SC4V-TP is down! No actions possible with zero health.\n" << std::endl;

	std::cout << "--- Guard Mode Test ---" << std::endl;
	ScavTrap scavtrap2("Gatekeeper");
	scavtrap2.guardGate();
	scavtrap2.takeDamage(90);
	scavtrap2.guardGate();
	scavtrap2.takeDamage(15);
	scavtrap2.guardGate();
	std::cout << "Gatekeeper is also down. Guard mode is disabled with zero health.\n" << std::endl;

	std::cout << "--- All Tests Complete ---" << std::endl;

	return 0;
}

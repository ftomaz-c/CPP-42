/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 18:04:00 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/12 00:18:20 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {

	{
		FragTrap fragtrap1("FR4G-TP");

		std::cout << "\n--- Basic FragTrap Functionality Tests ---\n" << std::endl;
		fragtrap1.attack("Vault Guardian");
		fragtrap1.takeDamage(10);
		fragtrap1.beRepaired(10);
		std::cout << "\n--- Testing FragTrap High Fives ---" << std::endl;
		fragtrap1.highFivesGuys();
	}

	{
		FragTrap fragtrap2("FR4G-TP");

		std::cout << "\n--- Energy Depletion Test ---" << std::endl;
		for (int i = 1; i < 101; ++i) {
			std::cout << i << ": ";
			fragtrap2.attack("Energy Dummy");
		}
		fragtrap2.attack("Energy Dummy");
		fragtrap2.beRepaired(10);
	}

	{
		FragTrap fragtrap3("FR4G-TP");
		
		std::cout << "\n--- Health Depletion Test ---" << std::endl;
		fragtrap3.takeDamage(90);
		fragtrap3.takeDamage(20);
		fragtrap3.attack("Vault Guardian");
		fragtrap3.beRepaired(20);
		std::cout << "\n--- Testing FragTrap High Fives after Damage ---" << std::endl;
		fragtrap3.highFivesGuys();
	}

	std::cout << "--- All Tests Complete ---" << std::endl;
	return ( 0 );
}

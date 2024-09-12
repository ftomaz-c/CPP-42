/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 18:04:00 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/12 12:21:56 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {

	{
		FragTrap fragtrap1("FR4G-TP");

		std::cout << "\n\t\t--- Basic FragTrap Functionality Tests ---\n" << std::endl;
		fragtrap1.attack("Vault Guardian");
		fragtrap1.takeDamage(10);
		fragtrap1.beRepaired(10);
		std::cout << "\n\t\t--- Testing FragTrap High Fives ---\n" << std::endl;
		fragtrap1.highFivesGuys();
	}

	{
		FragTrap fragtrap2("FR4G-TP");

		std::cout << "\n\t\t--- Energy Depletion Test ---\n" << std::endl;
		fragtrap2.highFivesGuys();
		fragtrap2.beRepaired(1);
		for (int i = 1; i < 101; ++i) {
			std::cout << i << ": ";
			fragtrap2.attack("Energy Dummy");
		}
		fragtrap2.attack("Energy Dummy");
		fragtrap2.beRepaired(10);
	}

	{
		std::cout << "\n\t\t--- Health Depletion Test ---\n" << std::endl;
		FragTrap fragtrap3("FR4G-TP");
		fragtrap3.takeDamage(90);
		fragtrap3.takeDamage(20);
		fragtrap3.attack("Vault Guardian");
		fragtrap3.beRepaired(20);
		std::cout << "\n\t\t--- Testing FragTrap High Fives after Damage ---\n" << std::endl;
		fragtrap3.highFivesGuys();
	}

	std::cout << "\n\t\t--- All Tests Complete ---" << std::endl;
	return ( 0 );
}

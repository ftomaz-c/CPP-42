/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:45:46 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/20 18:05:02 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	command;

	std::cout << "===================\n";
    std::cout << "   THE PHONEBOOK    \n";
    std::cout << "===================\n";
	do
	{
		std::cout << std::endl << "> ";
		std::cin >> command;
		if (command == "ADD")
			phonebook.add_contact();
		else if (command == "SEARCH")
			phonebook.search_contact();
		else if (command != "EXIT")
			std::cout << "--Unknown command. Please try again--\n";
	} while (command != "EXIT");
	return (0);
}

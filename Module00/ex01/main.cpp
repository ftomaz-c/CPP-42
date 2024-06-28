/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:45:46 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/24 17:53:52 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(int argc, char **argv)
{
	PhoneBook	phonebook;
	std::string	command;

	(void)argv;
	if (argc != 1) 
	{
		std::cout << "./phonebook doesn't accept any arguments" << std::endl;
		return (1);
	}
	std::cout << "===================\n";
    std::cout << "   THE PHONEBOOK    \n";
    std::cout << "===================\n";
	do
	{
		std::cout << std::endl << "> ";
		std::cin >> command;
		if (command.compare("ADD") == 0)
			phonebook.addContact();
		else if (command.compare("SEARCH") == 0)
			phonebook.searchContact();
		else if (command.compare("EXIT") != 0)
			std::cout << "--Unknown command. Please try again--" << std::endl;
	} while (command.compare("EXIT") != 0);
	return (0);
}

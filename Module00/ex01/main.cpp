/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:45:46 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/21 17:39:14 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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
			phonebook.addContact();
		else if (command == "SEARCH")
			phonebook.searchContact();
		else if (command != "EXIT")
			std::cout << "--Unknown command. Please try again--\n";
	} while (command != "EXIT");
	return (0);
}

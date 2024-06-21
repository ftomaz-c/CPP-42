/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:43:24 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/20 19:42:17 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	truncate_string(const std::string &str)
{
	return (str.length() > 10 ? str.substr(0, 9) + "." : str);
}

void	PhoneBook::print_contacts() const
{
	std::cout	<< std::setw(10) << std::right << "INDEX"
				<< "|"
				<< std::setw(10) << std::right << "FIRST NAME"
				<< "|"
				<< std::setw(10) << std::right << "LAST NAME"
				<< "|"
				<< std::setw(10) << std::right << "NICKNAME"
				<< "|"
				<< std::endl;
	for (int i = 0; i < MAX_CONTACTS; i++)
	{
		if (_contacts[i].getIndex() != -1)
			std::cout	<< std::setw(10) << std::right << _contacts[i].getIndex()
				<< "|"
				<< std::setw(10) << std::right << truncate_string(_contacts[i].getFirstName())
				<< "|"
				<< std::setw(10) << std::right << truncate_string(_contacts[i].getLastName())
				<< "|"
				<< std::setw(10) << std::right << truncate_string(_contacts[i].getNickname())
				<< "|"
				<< std::endl;
	}
	return ;
}

void	PhoneBook::search_contact() const
{
	std::cout << "Searching contacts...\n";
	if (_contacts[0].getIndex() == -1)
	{
		std::cout << "--The PhoneBook is empty--" << std::endl;
		return ;
	}
	print_contacts();
	int index;
	do
	{
		std::cout << std::endl;
		std::cout << "Entry: ";
		std::cin >> index;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			index = -1;
		}
		if ((index >= 1 && index <= 8 && _contacts[index - 1].getIndex() == -1) || index == -1)
		{
			std::cout << "--Invalid entry. Please enter a number between 1 and 8";
			std::cout << " corresponding to an existing contact--" << std::endl;
			index = 0;
		}
	} while (index < 1 || index > 8);
	std::cout << std::endl;
	_contacts[index - 1].display_contact();
}

void	PhoneBook::add_contact(void)
{
	Contact	new_contact;

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	new_contact.contact_input();
	new_contact.setIndex(_currentContactIndex + 1);
	PhoneBook::_contacts[_currentContactIndex] = new_contact;
	_currentContactIndex++;
	if (_currentContactIndex == MAX_CONTACTS)
		_currentContactIndex = 0;
	std::cout << "--Contact added--\n";
	return ;
}

PhoneBook::PhoneBook(void) : _currentContactIndex(0)
{
	std::cout << "PhoneBook Constructor Called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook Destructor Called" << std::endl;
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:54:27 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/20 19:24:28 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string trim(const std::string& str, const std::string& whitespace = " ")
{
	const std::size_t strBegin = str.find_first_not_of(whitespace);
	if (strBegin == std::string::npos)
		return ("");
	const std::size_t strEnd = str.find_last_not_of(whitespace);
	const std::size_t strRange = strEnd - strBegin + 1;
	return (str.substr(strBegin, strRange));
}

void	Contact::display_contact(void) const
{
	if (index != -1)
	{
		std::cout << "Index:	" << getIndex() << std::endl;
		std::cout << "First Name:	" << getFirstName() << std::endl;
		std::cout << "Last Name:	" << getLastName() << std::endl;
		std::cout << "Nickname:	" << getNickname() << std::endl;
		std::cout << "Phone Number:	" << getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret:	" << getNote() << std::endl;
	}
	else
		std::cout << "Contact is empty" << std::endl;
}

std::string get_input(const std::string &prompt)
{
	std::string input;
	do
	{
		std::cout << prompt;
		std::getline(std::cin, input);
		input = trim(input);
		if (input.empty())
			std::cout << "Input cannot be empty. Please enter a valid input." << std::endl;
	} while (input.empty());
	return (input);
}

void	Contact::contact_input(void)
{
	setFirstName(get_input("First Name: "));
	setLastName(get_input("Last Name: "));
	setNickname(get_input("Nickname: "));
	setPhoneNumber(get_input("Phone Number: "));
	setNote(get_input("Darkest Secret: "));
	return ;
}

void	Contact::setIndex(int index)
{
	this->index = index;
	return ;
}
void	Contact::setFirstName(const std::string &first_name)
{
	this->first_name = first_name;
	return ;
}

void	Contact::setLastName(const std::string &last_name)
{
	this->last_name = last_name;
	return ;
}

void	Contact::setNickname(const std::string &nickname)
{
	this->nickname = nickname;
	return ;
}

void	Contact::setPhoneNumber(const std::string &phone_number)
{
	this->phone_number = phone_number;
	return ;
}

void	Contact::setNote(const std::string &note)
{
	this->note = note;
	return ;
}

int	Contact::getIndex() const
{
	return (this->index);
}
const std::string	&Contact::getFirstName() const
{
	return (this->first_name);
}

const std::string &Contact::getLastName() const
{
	return (this->last_name);
}

const std::string	&Contact::getNickname() const
{
	return (this->nickname);
}

const std::string	&Contact::getPhoneNumber() const
{
	return (this->phone_number);
}

const std::string	&Contact::getNote() const
{
	return (this->note);
}

Contact::Contact (void)
{
	this->index = -1;
	return ;
}

Contact::~Contact (void)
{
	return ;
}


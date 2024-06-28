/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:54:27 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/24 18:06:05 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

static std::string trim(const std::string& str, const std::string& whitespace = " ")
{
	const std::size_t strBegin = str.find_first_not_of(whitespace);
	if (strBegin == std::string::npos)
		return ("");
	const std::size_t strEnd = str.find_last_not_of(whitespace);
	const std::size_t strRange = strEnd - strBegin + 1;
	return (str.substr(strBegin, strRange));
}

void	Contact::displayContact(void) const
{
	if (_index != -1)
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

std::string getInput(const std::string &prompt)
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

void	Contact::contactInput(void)
{
	setFirstName(getInput("First Name: "));
	setLastName(getInput("Last Name: "));
	setNickname(getInput("Nickname: "));
	setPhoneNumber(getInput("Phone Number: "));
	setNote(getInput("Darkest Secret: "));
	return ;
}

void	Contact::setIndex(int index)
{
	this->_index = index;
	return ;
}
void	Contact::setFirstName(const std::string &first_name)
{
	this->_first_name = first_name;
	return ;
}

void	Contact::setLastName(const std::string &last_name)
{
	this->_last_name = last_name;
	return ;
}

void	Contact::setNickname(const std::string &nickname)
{
	this->_nickname = nickname;
	return ;
}

void	Contact::setPhoneNumber(const std::string &phone_number)
{
	this->_phone_number = phone_number;
	return ;
}

void	Contact::setNote(const std::string &note)
{
	this->_note = note;
	return ;
}

int	Contact::getIndex() const
{
	return (this->_index);
}
const std::string	&Contact::getFirstName() const
{
	return (this->_first_name);
}

const std::string &Contact::getLastName() const
{
	return (this->_last_name);
}

const std::string	&Contact::getNickname() const
{
	return (this->_nickname);
}

const std::string	&Contact::getPhoneNumber() const
{
	return (this->_phone_number);
}

const std::string	&Contact::getNote() const
{
	return (this->_note);
}

Contact::Contact (void)
{
	this->_index = -1;
	return ;
}

Contact::~Contact (void)
{
	return ;
}


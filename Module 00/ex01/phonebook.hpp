/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 13:58:38 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/20 19:36:10 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

const int	MAX_CONTACTS = 8;

class Contact
{
public:
	Contact (void);
	~Contact (void);

	//setters
	void setIndex(int index);
    void setFirstName(const std::string &first_name);
    void setLastName(const std::string &last_name);
    void setNickname(const std::string &nickname);
    void setPhoneNumber(const std::string &phone_number);
    void setNote(const std::string &note);

	//getters
	int getIndex() const;
	const std::string &getFirstName() const;
	const std::string &getLastName() const;
	const std::string &getNickname() const;
	const std::string &getPhoneNumber() const;
	const std::string &getNote() const;
	
	void	contact_input(void);
	void	display_contact(void) const;
	
private:
	int index;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string note;
};

class PhoneBook
{
public:
	PhoneBook (void);
	~PhoneBook (void);

	void	add_contact(void);
	void	search_contact(void) const;
	void	print_contacts(void) const;

private:
	Contact	_contacts[MAX_CONTACTS];
	int		_currentContactIndex;
};

#endif
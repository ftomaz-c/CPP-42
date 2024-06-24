/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 13:58:38 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/24 13:59:11 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include "Contact.hpp"

const int	MAX_CONTACTS = 8;

class PhoneBook
{
private:
	Contact	_contacts[MAX_CONTACTS];
	int		_currentContactIndex;

public:
	PhoneBook (void);
	~PhoneBook (void);

	void	addContact(void);
	void	searchContact(void) const;
	void	printContacts(void) const;

};

#endif
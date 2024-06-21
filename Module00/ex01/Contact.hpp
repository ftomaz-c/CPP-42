/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 21:05:08 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/21 22:24:00 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "PhoneBook.hpp"

class Contact
{
private:
	int index;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string note;

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
	
	void	contactInput(void);
	void	displayContact(void) const;

};

#endif
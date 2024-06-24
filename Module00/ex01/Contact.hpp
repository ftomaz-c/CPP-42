/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 21:05:08 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/24 14:03:43 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

class Contact
{
private:
	int _index;
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _note;

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
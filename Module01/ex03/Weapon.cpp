/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 22:31:39 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/21 23:16:53 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string	Weapon::getType() const
{
	return(this->_type);
}
	
void	Weapon::setType(std::string type)
{
	_type = type;
}

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "Weapon Constructor Called" << std::endl;
	return ;
}

Weapon::~Weapon()
{
	std::cout << "Weapon Destructor Called" << std::endl;
	return ;
}
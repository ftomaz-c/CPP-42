/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 22:31:39 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/09 15:48:39 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &	Weapon::getType() const
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
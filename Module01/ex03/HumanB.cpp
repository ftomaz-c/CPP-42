/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 23:14:39 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/09 17:18:03 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
	return ;
}

void	HumanB::attack(void) const
{
	const	std::string	weapon;

	if (!_weapon)
		std::cout << _name << " attacks with nothing" << std::endl;
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	return ;
}

HumanB::HumanB(std::string name) : _weapon (NULL), _name(name)
{
	std::cout << "HumanB Constructor Called" << std::endl;
	return ;
}

HumanB::~HumanB()
{
	std::cout << "HumanA Destructor Called" << std::endl;
	return ;
}
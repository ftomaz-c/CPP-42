/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 23:14:39 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/21 23:32:25 by ftomazc          ###   ########.fr       */
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
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	return ;
}

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << "HumanB Constructor Called" << std::endl;
	return ;
}

HumanB::~HumanB()
{
	std::cout << "HumanA Destructor Called" << std::endl;
	return ;
}
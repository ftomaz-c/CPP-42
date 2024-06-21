/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 23:14:11 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/21 23:30:53 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	Weapon*				_weapon;
	std::string const	_name;

public:
	HumanB(std::string name);
	~HumanB();

	void	setWeapon(Weapon& type);
	void	attack(void) const;
};

#endif
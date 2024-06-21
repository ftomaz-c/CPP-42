/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 21:08:23 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/21 21:32:55 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

Zombie::Zombie( std::string name ) : _name(name)
{
	std::cout << "Zombie Constructor Called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << _name << " Destructor Called" << std::endl;
}

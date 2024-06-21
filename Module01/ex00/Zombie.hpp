/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 21:08:40 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/21 21:28:34 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{

private:
	std::string _name;

public:
	Zombie( std::string name );
	~Zombie();

	void announce( void );
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
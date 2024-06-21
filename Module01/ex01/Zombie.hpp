/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 21:08:40 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/21 22:01:26 by ftomazc          ###   ########.fr       */
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
	Zombie();
	Zombie( std::string name );
	~Zombie();

	void	announce( void );
	void	setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif
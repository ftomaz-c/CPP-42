/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 21:46:00 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/21 22:04:07 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*horde;

	if (N <= 0)
		return (NULL);

	horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	
	return (horde);
}
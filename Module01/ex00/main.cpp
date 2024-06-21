/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 21:26:00 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/21 21:40:35 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	zombie1("Merle");
	Zombie	*zombie2;

	zombie1.announce();	
	zombie2 = newZombie("Shane");
	zombie2->announce();

	randomChump("Sasha");

	delete zombie2;
	return (0);
}
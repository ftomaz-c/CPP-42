/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:45:25 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/28 14:51:00 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(void)
{
	Harl	harl;

	harl.complain("DEBUG");
	std::cout << std::endl;
	
	harl.complain("INFO");
	std::cout << std::endl;

	harl.complain("WARNING");
	std::cout << std::endl;

	harl.complain("ERROR");
	
	return (0);
}
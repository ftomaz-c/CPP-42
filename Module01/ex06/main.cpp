/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 12:25:39 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/26 12:31:09 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	Harl	harl;
	
	if (argc != 2)
	{
		std::cerr << "This program takes 2 parameters:" << std::endl;
		std::cerr << "Usage: " << argv[0] << " \"LEVEL\"" << std::endl;
		return (1);
	}
	harl.complain(std::string(argv[1]));
	return (0);
}
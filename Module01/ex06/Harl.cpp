/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:28:10 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/28 15:26:15 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void	Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger.\n";
	std::cout << "I really do!" << std::endl;
	return ;
}

void	Harl::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\n";
	std::cout << "You didn’t put enough bacon in my burger! If you did, ";
	std::cout << "I wouldn’t be asking for more!" << std::endl;
	return ;
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\n";
	std::cout << "I’ve been coming for years whereas you started working ";
	std::cout << "here since last month." << std::endl;
	return ;
}

void	Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
	return ;
}

void	Harl::complain(std::string level)
{
	std::string levelArray[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++) {
		if (levelArray[i] == level) {
			while (i < 4) {
				switch (i) {
					case (0):
						this->debug();
						break ;
					case (1):
						this->info();
						break ;
					case (2):
						this->warning();
						break ;
					case (3):
						this->error();
						break ;
				}
				i++;
			}
			return ;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	return ;
}

Harl::Harl()
{
	return ;
}

Harl::~Harl()
{
	return ;
}
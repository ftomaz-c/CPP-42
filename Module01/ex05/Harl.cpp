/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 11:28:10 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/28 14:50:50 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. ";
	std::cout << "I really do!" << std::endl;
	return ;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn’t put enough bacon in my burger! If you did, ";
	std::cout << "I wouldn’t be asking for more!" << std::endl;
	return ;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been coming for years whereas you started working ";
	std::cout << "here since last month." << std::endl;
	return ;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
	return ;
}

void	Harl::complain(std::string level)
{
	struct levelArrayStruct
	{
		std::string	level;
		void		(Harl::*memberFunction)();
	};
	
	levelArrayStruct levelArray[] = {
		{"DEBUG", &Harl::debug},
		{"INFO", &Harl::info},
		{"WARNING", &Harl::warning},
		{"ERROR", &Harl::error}
	};

	for (int i = 0; i < 4; i++)
	{
		if (levelArray[i].level == level)
		{
			(this->*levelArray[i].memberFunction)();
			return ;
		}
	}
	return ;
}

Harl::Harl()
{
	std::cout << "-Harl Constructor called-" << std::endl;
	return ;
}

Harl::~Harl()
{
	std::cout << "-Harl Destructor called-" << std::endl;
	return ;
}
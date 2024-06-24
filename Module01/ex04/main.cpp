/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 15:17:52 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/23 15:50:07 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "This program takes 3 parameters:" << std::endl;
		std::cout << "./sed filename s1 s2" << std::endl;
		return (1);
	}
	std::fstream	fs;
	fs.open(argv[1]);
	if (!fs)
	{
		std::cout << argv[1] << " couldn't open" << std::endl;
		return (2);
	}
	std::string	buf;
	int	count = 0;
	while(std::getline(fs, buf, '\n'))
	{
		count++;
		size_t	pos = buf.find(argv[2]);
		if (pos != std::string::npos)
		{
			
		}
	}
}
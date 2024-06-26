/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 15:17:52 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/26 11:22:15 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "This program takes 3 parameters:" << std::endl;
		std::cerr << "Usage: " << argv[0] << " filename s1 s2" << std::endl;
		return (1);
	}

	std::fstream	fs;
	fs.open(argv[1]);
	if (!fs)
	{
		std::cerr << "error: " << argv[1] << " could not open" << std::endl;
		return (2);
	}

	std::ofstream	new_file("new_file.txt", std::ios_base::app);
	if (!new_file)
	{
		std::cerr << "error: could not create new_file.txt" << std::endl;
		fs.close();
		return (3);
	}

	std::string	buf;
	while(std::getline(fs, buf, '\n'))
	{
		size_t	pos = buf.find(argv[2]);
		if (pos != std::string::npos)
		{
			buf.erase(pos, std::string(argv[3]).length() - 1);
			buf.insert(pos, std::string(argv[3]));
		}
		new_file << buf;
		buf.clear();
		if (fs.peek() != EOF)
			new_file << std::endl;
	}
	fs.close();
	new_file.close();
}

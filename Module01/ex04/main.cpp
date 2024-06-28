/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 15:17:52 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/28 15:19:54 by ftomaz-c         ###   ########.fr       */
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
	if (fs.peek() == EOF) {
		std::cout << "error: file is empty" << std::endl;
		return (3);
	}

	std::ofstream	new_file("new_file.txt", std::ios_base::app);
	if (!new_file)
	{
		std::cerr << "error: could not create new_file.txt" << std::endl;
		fs.close();
		return (4);
	}

	std::string	buf;
	while(std::getline(fs, buf, '\n'))
	{
		size_t	pos = buf.find(argv[2]);
		if (pos != std::string::npos)
		{
			buf.erase(pos, std::string(argv[2]).length() - 1);
			buf.insert(pos, std::string(argv[3]));
		}
		new_file << buf;
		buf.clear();
		if (fs.peek() != EOF)
			new_file << std::endl;
	}
	fs.close();
	new_file.close();
	return (0);
}

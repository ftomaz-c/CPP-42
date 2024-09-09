/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 15:17:52 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/09 18:00:26 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc != 4) {
		std::cerr << "This program takes 3 parameters:" << std::endl;
		std::cerr << "Usage: " << argv[0] << " filename s1 s2" << std::endl;
		return (1);
	}

	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.empty()) {
		std::cerr << "error: s1 cannot be empty string" << std::endl;
		return (1);
	}
	
	std::ifstream	infile(filename.c_str());
	if (!infile) {
		std::cerr << "error: " << argv[1] << " could not be opened" << std::endl;
		return (2);
	}
	if (infile.peek() == EOF) {
		std::cout << "error: file is empty" << std::endl;
		return (3);
	}

	std::string	outfileName = filename + ".replace";
	std::ofstream	outfile(outfileName.c_str());
	if (!outfile) {
		std::cerr << "error: could not create output file" << std::endl;
		infile.close();
		return (4);
	}

	std::string	line;
	while(std::getline(infile, line))
	{
		size_t	pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length(); 
		}
		outfile << line;
		if (!infile.eof())
			outfile << std::endl;
	}
	infile.close();
	outfile.close();
	return (0);
}

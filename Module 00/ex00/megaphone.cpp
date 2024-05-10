/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:39:01 by ftomazc           #+#    #+#             */
/*   Updated: 2024/05/05 18:30:38 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

std::string	to_uppercase(const std::string& input)
{
	std::string output = input;
	size_t i = 0;
	while (i < output.length())
	{
		output[i] = std::toupper(static_cast<unsigned char>(output[i]));
		i++;
	}
	return output;
}

int	main(int argc, char **argv)
{
	int	i = 1;
	
	if (argc > 1)
	{
		while (i < argc)
		{
			std::string new_str = to_uppercase(argv[i]);
			std::cout << new_str;
			i++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
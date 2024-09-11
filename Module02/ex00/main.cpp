/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 21:55:20 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/11 12:38:37 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void )
{
	Fixed	a;
	Fixed	b( a );
	std::cout << "-------" << std::endl;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;

	a.setRawBits(2);
	b.setRawBits(4);
	
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << "-------" << std::endl;
	
	Fixed	c;
	std::cout << "-------" << std::endl;
	std::cout << c.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;	
	c = b;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	std::cout << "-------" << std::endl;
	std::cout << a.getRawBits() << std::endl;
	
	return (0);
}
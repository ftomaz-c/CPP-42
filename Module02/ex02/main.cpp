/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 21:55:20 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/11 13:54:41 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {

	Fixed a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << std::endl << "--relational operators--" << std::endl;
	if (a < b)
		std::cout << "a is less than b" << std::endl;
	else
		std::cout << "a is not less than b" << std::endl;
	if (a > b)
		std::cout << "a is greater than b" << std::endl;
	else
		std::cout << "a is not greater than b" << std::endl;
	std::cout << "------" << std::endl;

	if (a <= b)
		std::cout << "a is less or equal to b" << std::endl;
	else
		std::cout << "a is not less or equal to b" << std::endl;
	if (a >= b)
		std::cout << "a is greater or equal to b" << std::endl;
	else
		std::cout << "a is not greater or equal to b" << std::endl;
	std::cout << "------" << std::endl;
	
	if (a == b)
		std::cout << "a is equal to b" << std::endl;
	else if (a != b)
		std::cout << "a is not equal to b" << std::endl;

	std::cout << std::endl << "--arithmetic operators--" << std::endl;
	std::cout << "a + b: " << (a + b) << std::endl;
	std::cout << "a - b: " << (a - b) << std::endl;
	std::cout << "a * b: " << (a * b) << std::endl;
	std::cout << "a / b: " << (a / b) << std::endl;

	std::cout << std::endl << "--increment and decrement operators--" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	/*std::cout << "------" << std::endl;
	std::cout << b << std::endl;
	std::cout << --b << std::endl;
	std::cout << b-- << std::endl;
	std::cout << b << std::endl;*/

	std::cout << std::endl << "--public overloaded member functions--" << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;

	Fixed const c(1.5f);
    Fixed const d(4.2f);
	std::cout << Fixed::max( c, d ) << std::endl;
	std::cout << Fixed::min( c, d ) << std::endl;
	return 0;
}
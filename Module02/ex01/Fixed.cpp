/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 21:58:21 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/11 13:24:32 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

/*this shifting reserves space for the fractional bits
(equivalent to multiplying)*/
Fixed::Fixed( const int nbr )
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(nbr << this->_numberFractionalBits);
	return ;
}

/*Converts a floating-point number (nbr) into a fixed-point number;*/
Fixed::Fixed( const float nbr )
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits (roundf(nbr * (1 << this->_numberFractionalBits)));
	return ;
}

/*converts the internal fixed-point representation back into a floating-point number*/
float	Fixed::toFloat( void ) const
{
	return ( roundf(this->getRawBits()) / (1 << this->_numberFractionalBits)); 
}

/*converts the internal fixed-point representation back into an integer by 
discarding the fractional part.
(same as dividing)*/
int	Fixed::toInt( void ) const
{
	return ( int(this->getRawBits()) >> this->_numberFractionalBits);
}

Fixed::Fixed( void ) : _fixedPointNumber(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &	Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Copy assignment operator called" << std::endl;

	if ( this != &rhs )
		this->_fixedPointNumber = rhs.getRawBits();
	return ( *this );
}

int	Fixed::getRawBits( void ) const
{
	return ( this->_fixedPointNumber );
}

void	Fixed::setRawBits ( int const raw )
{
	_fixedPointNumber = raw;
	std::cout << this->getRawBits() << std::endl;
	return ;
}

/*stream insertion operator*/
std::ostream &	operator<<( std::ostream & o, Fixed const & rhs )
{
	o << rhs.toFloat();
	return ( o );
}
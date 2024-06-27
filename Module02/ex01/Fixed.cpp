/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 21:58:21 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/27 13:23:18 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed( const int nbr )
{
	std::cout << "Int constructor called" << std::endl;

	this->_fixedPointNumber =  nbr;
	return ;
}

Fixed::Fixed( const float nbr )
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointNumber =  nbr;
	return ;
}

float	Fixed::toFloat( void ) const
{
	float(this->_fixedPointNumber);
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

	if ( this != &rhs)
		this->_fixedPointNumber = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointNumber);
}

void	Fixed::setRawBits ( int const raw )
{
	_fixedPointNumber = raw;
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 21:58:21 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/29 17:52:22 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed( const int nbr ) {
	this->setRawBits(nbr << this->_numberFractionalBits);
	return ;
}

Fixed::Fixed( const float nbr ) {
	this->setRawBits (roundf(nbr * (1 << this->_numberFractionalBits)));
	return ;
}

float	Fixed::toFloat( void ) const {
	return ( roundf(this->getRawBits()) / (1 << this->_numberFractionalBits)); 
}

int	Fixed::toInt( void ) const {
	return ( int(this->getRawBits()) >> this->_numberFractionalBits);
}

Fixed::Fixed( void ) : _fixedPointNumber(0) {
	return ;
}

Fixed::Fixed( Fixed const & src) {
	*this = src;
	return ;
}

Fixed::~Fixed( void ) {
	return ;
}

/*assignment operator*/
Fixed &	Fixed::operator=( const Fixed & rhs ) {
	if ( this != &rhs )
		this->_fixedPointNumber = rhs.getRawBits();
	return ( *this );
}

int	Fixed::getRawBits( void ) const {
	return ( this->_fixedPointNumber );
}

void	Fixed::setRawBits ( int const raw ) {
	_fixedPointNumber = raw;
	return ;
}

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs ) {
	o << rhs.toFloat();
	return ( o );
}

/*relational operators*/
bool	Fixed::operator>( Fixed const & obj ) const {
	return ( _fixedPointNumber > obj.getRawBits() );
}

bool	Fixed::operator<( Fixed const & obj ) const {
	return ( _fixedPointNumber < obj.getRawBits() );
}

bool	Fixed::operator>=( Fixed const & obj ) const {
	return ( _fixedPointNumber >= obj.getRawBits() );
}

bool	Fixed::operator<=( Fixed const & obj ) const {
	return ( _fixedPointNumber <= obj.getRawBits() );
}

bool	Fixed::operator==( Fixed const & obj ) const {
	return ( _fixedPointNumber == obj.getRawBits() );
}

bool	Fixed::operator!=( Fixed const & obj ) const {
	return ( _fixedPointNumber != obj.getRawBits() );	
}

/*arithmetic operators*/
Fixed	Fixed::operator+( Fixed const & obj ) {
	Fixed	tmp(this->toFloat() + obj.toFloat());
	return ( tmp );
}

Fixed	Fixed::operator-( Fixed const & obj ) {
	Fixed	tmp(this->toFloat() - obj.toFloat());
	return ( tmp );
}

Fixed	Fixed::operator*( Fixed const & obj ) {
	Fixed	tmp(this->toFloat() * obj.toFloat());
	return ( tmp );
}

Fixed	Fixed::operator/( Fixed const & obj ) {
	Fixed	tmp(this->toFloat() / obj.toFloat());
	return ( tmp );
}
/*increment and decrement operator overloading*/
Fixed &	Fixed::operator++( void ) {
	_fixedPointNumber++;
	return (*this);
}

Fixed	Fixed::operator++( int ) {
	Fixed	tmp(*this);
	_fixedPointNumber++;
	return ( tmp );
}

Fixed &	Fixed::operator--( void ) {
	_fixedPointNumber--;
	return ( *this );
}

Fixed	Fixed::operator--( int ) {
	Fixed	tmp(*this);
	_fixedPointNumber++;
	return ( tmp );
}

Fixed	Fixed::min ( Fixed & obj1, Fixed & obj2 ) {
	if ( obj2.getRawBits() < obj1.getRawBits() )
		return ( obj2 );
	return ( obj1 );
}

Fixed	Fixed::min ( Fixed const & obj1, Fixed const & obj2 ) {
	if ( obj2.getRawBits() < obj1.getRawBits() )
		return ( obj2 );
	return ( obj1 );
}

Fixed	Fixed::max ( Fixed & obj1, Fixed & obj2 ) {
	if ( obj2.getRawBits() > obj1.getRawBits() )
		return ( obj2 );
	return ( obj1 );
}

Fixed	Fixed::max ( Fixed const & obj1, Fixed const & obj2 ) {
	if ( obj2.getRawBits() > obj1.getRawBits() )
		return ( obj2 );
	return ( obj1 );
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 21:53:16 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/29 17:50:38 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <ostream>

class Fixed
{
	
private:
	int					_fixedPointNumber;
	static const int	_numberFractionalBits = 8;

public:
	Fixed( void );
	Fixed( const int nbr );
	Fixed( const float nbr );
	Fixed( Fixed const & src );
	~Fixed( void );

	/*relational operators*/
	bool	operator>( Fixed const & obj ) const;
	bool	operator<( Fixed const & obj ) const;
	bool	operator>=( Fixed const & rhs ) const;
	bool	operator<=( Fixed const & rhs ) const;
	bool	operator==( Fixed const & rhs ) const;
	bool	operator!=( Fixed const & rhs ) const;

	/*arythmetic operators*/
	Fixed	operator+( Fixed const & obj );
	Fixed	operator-( Fixed const & obj );
	Fixed	operator*( Fixed const & obj );
	Fixed	operator/( Fixed const & obj );
	
	/*increment and decrement operators*/
	Fixed &	operator++( void ); //empty parameter: PREFIX
	Fixed	operator++( int ); //dummy parameter int: POSTFIX
	Fixed &	operator--( void );
	Fixed	operator--( int );

	Fixed & operator=( const Fixed & rhs );

	static Fixed	min ( Fixed & obj1, Fixed & obj2 );
	static Fixed	min ( Fixed const & obj1, Fixed const & obj2 );
	static Fixed	max ( Fixed & obj1, Fixed & obj2 );
	static Fixed	max ( Fixed const & obj1, Fixed const & obj2 );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs );

#endif
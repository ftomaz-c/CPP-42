/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 21:53:16 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/28 17:11:02 by ftomaz-c         ###   ########.fr       */
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

	bool	operator>( Fixed const & obj ) const;
	bool	operator<( Fixed const & obj ) const;
	bool	operator>=( Fixed const & rhs ) const;
	bool	operator<=( Fixed const & rhs ) const;
	bool	operator==( Fixed const & rhs ) const;
	bool	operator!=( Fixed const & rhs ) const;

	Fixed &	operator+( Fixed const & obj );
	Fixed &	operator-( Fixed const & obj );
	Fixed &	operator*( Fixed const & obj );
	Fixed &	operator/( Fixed const & obj );

	Fixed &	operator++( void );
	Fixed &	operator++( int );
	Fixed &	operator--( void );
	Fixed &	operator--( int );

	Fixed &	operator=( Fixed const & rhs );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs );

#endif
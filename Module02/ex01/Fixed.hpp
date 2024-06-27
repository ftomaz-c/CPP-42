/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 21:53:16 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/26 22:48:44 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

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

	Fixed &	operator=( Fixed const & rhs );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream &	operator<<( std::ostream & o, Fixed const & i );

#endif
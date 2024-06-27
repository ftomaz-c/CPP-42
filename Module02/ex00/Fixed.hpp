/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 21:53:16 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/26 22:22:36 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	
private:
	int					_fixedPointNumber;
	static const int	_numberFractionalBits;

public:
	Fixed( void );
	Fixed( Fixed const & src );
	~Fixed( void );

	Fixed &	operator=( Fixed const & rhs );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif
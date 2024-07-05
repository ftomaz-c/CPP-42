/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 18:23:34 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/04 15:45:44 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	Fixed const x;
	Fixed const y;
	
	
public:
	Point (  );
	Point ( const float x, const float y );
	Point( Point const & src );
	~Point(  );

	Point & operator=( Point const & rhs);

	Fixed	getX(  ) const;
	Fixed	getY(  ) const;
};

#endif
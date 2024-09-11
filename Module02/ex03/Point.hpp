/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 18:23:34 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/11 14:57:15 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <iostream>

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

bool bsp( const Point & a, const Point & b, const Point & c, const Point & point);

#endif
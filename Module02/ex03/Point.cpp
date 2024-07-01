/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 18:24:27 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/29 18:52:22 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(const Point & src) : x(src.x), y(src.y) {
	return ;
}

Point::Point( const float x, const float y ) : x(x), y(y) {
	return ;
}

Point::Point( void ) : x(0), y(0) {
	return ;
}

Point::~Point() {
	return ;
}

Point & Point::operator=( Point const & rhs) {
	if (this != &rhs) {
	}
	return ( *this );
}

Fixed	Point::getX() const {
	return ( this->x );
}

Fixed	Point::getY() const {
	return ( this->y );
}

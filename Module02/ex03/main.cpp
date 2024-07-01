/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 21:55:20 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/30 13:55:11 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.hpp"

/* In computer science, binary space partitioning (BSP) is a method for space
* partitioning which recursively subdivides an Euclidean space into two convex
* sets by using hyperplanes as partitions. This process of subdividing gives
* rise to a representation of objects within the space in the form of a tree
* data structure known as a BSP tree.
*/

int main( void ) {

	Point	a(0 , 0);
	Point	b(5 , 0);
	Point	c(0 , 5);
	
	Point points[] = {
		Point(2, 2),	// Inside the triangle
		Point(5, 5),	// Outside the triangle
		Point(0, 0),	// Vertex of the triangle
		Point(2, 0),	// On the edge of the triangle
		Point(-1, -1),	// Outside the triangle
		Point(1, 1),	// Inside the triangle
		Point(3, 3),	// Outside the triangle
		Point(0, 2),	// On the edge of the triangle
		Point(2.5, 2.5)	// Inside the triangle
	};
	

	for (long unsigned int i = 0; i < sizeof(points) / sizeof(points[0]); i++) {
		std::cout << "Point (" << points[i].getX().toFloat() << ", " << points[i].getY().toFloat() << (")");
		if (bsp(a, b, c, points[i]))
			std::cout << " is inside the triangle" << std::endl;
		else
			std::cout << " is outside the triangle" << std::endl;
	}
	return ( 0 );
}
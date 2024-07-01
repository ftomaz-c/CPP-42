/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 18:53:36 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/30 17:47:17 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.hpp"

/*
 * Binary Space Partitioning (BSP)
 *
 * Binary Space Partitioning is a method for recursively subdividing a space
 * into convex sets using hyperplanes. It is often used in computer graphics,
 * computational geometry, and 3D game engines to efficiently organize and
 * render scenes.
 *
 * A BSP tree is a data structure that represents this subdivision. Each node
 * in the tree corresponds to a subspace and is split into two further subspaces
 * by a hyperplane (in 2D, a line; in 3D, a plane).
 * 
 * Cross-Product Calculation
 * 
 * The cross-product (in 2D, sometimes called the "perpendicular product") is a
 * mathematical operation that helps determine the relative orientation of two
 * vectors. In the context of determining whether a point is inside a triangle,
 * the cross-product helps us understand the position of the point relative to
 * the edges of the triangle.
 * 
 * Relationship Between BSP and Cross-Product Calculation
 * 
 * In BSP, we recursively divide the space using hyperplanes. For a 2D triangle,
 * these hyperplanes are the lines formed by the triangle's edges. The goal is
 * to determine on which side of these lines the point lies. This is where the
 * cross-product comes into play.
 * 
 * When you calculate the cross-product of the vector along an edge of the
 * triangle and the vector from a vertex of the edge to the point, the sign of
 * the result tells you on which side of the edge the point lies:
 * 
 * 		Positive result: The point is to the left of the edge.
 * 		Negative result: The point is to the right of the edge.
 * 		Zero result: The point is on the edge.
 * 
 * By checking the cross-products for all three edges of the triangle, you can
 * determine whether the point is inside the triangle. If the point lies on the
 * same relative side for all three edges, it is inside the triangle.
 * 
 * Example given three points:
 * 		A(x1,y1)
 * 		B(x2,y2)
 * 		P(x,y)
 * 
 * The formula:
 * 			CrossProduct=(x2−x1)⋅(y−y1)−(x−x1)⋅(y2−y1)
 * 
 * calculates the signed area of the parallelogram formed by vectors AB and AP
 */

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	
	Fixed	d1;
	Fixed	d2;
	Fixed	d3;
	
	//AB and AP
	d1 = ((b.getX() - a.getX()) * (point.getY() - a.getY())) - ((point.getX() - a.getX()) * (b.getY() - a.getY()));
	//BC and BP
	d2 = ((c.getX() - b.getX()) * (point.getY() - b.getY())) - ((point.getX() - b.getX()) * (c.getY() - b.getY()));
	//CA and CP
	d3 = ((a.getX() - c.getX()) * (point.getY() - c.getY())) - ((point.getX() - c.getX()) * (a.getY() - c.getY()));

	bool has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	bool has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

	return ( !(has_neg && has_pos) && (d1 != 0) && (d2 != 0) && (d3 != 0) );
}
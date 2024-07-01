/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 18:53:52 by ftomazc           #+#    #+#             */
/*   Updated: 2024/06/29 20:11:07 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSP_HPP
# define BSP_HPP

# include <iostream>
# include "Fixed.hpp"
# include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
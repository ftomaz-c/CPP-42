/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:09:23 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/01 18:20:39 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap( void );
	FragTrap( FragTrap & src );
	FragTrap( std::string name );
	FragTrap & operator=( const FragTrap & rhs );
	~FragTrap( void );

	void	attack( const std::string& target );
	void	highFivesGuys ( void );
};

#endif
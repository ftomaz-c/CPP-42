/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:57:20 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/01 18:20:32 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAVTRAP_HPP
# define CLAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

public:
	ScavTrap(  );
	ScavTrap( std::string name );
	ScavTrap( ScavTrap & src );
	ScavTrap & operator=( const ScavTrap & rhs );
	~ScavTrap(  );

	void	attack( const std::string& target );
	void	guardGate (  );
};

#endif
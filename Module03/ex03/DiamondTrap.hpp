/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:34:57 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/05 12:20:20 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{

private:
	std::string	name;
	
public:
	DiamondTrap(  );
	DiamondTrap( DiamondTrap & src );
	DiamondTrap ( std::string name );
	~DiamondTrap(  );

	DiamondTrap & operator=( const DiamondTrap & rhs );

	void	attack( const std::string& target );
	void	whoAmI(  );
};

#endif
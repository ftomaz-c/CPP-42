/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:11:57 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/13 17:49:59 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter {

private:
	std::string	_name;
	AMateria	*_inventory[4];

public:
	Character(  );
	Character( const Character & src );
	Character( std::string name );
	~Character(  );

	Character & operator=( const Character & rhs );

	const std::string &	getName(  ) const;
	void	equip(AMateria* m);
	void	unequip( int idx );
	void	use( int idx, ICharacter & target);
};

#endif
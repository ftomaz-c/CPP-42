/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:11:57 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/05 11:32:22 by ftomazc          ###   ########.fr       */
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
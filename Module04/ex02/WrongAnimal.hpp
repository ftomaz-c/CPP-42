/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 12:23:41 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/13 12:24:03 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {

protected:
	std::string	type;

public:
	WrongAnimal(  );
	WrongAnimal( const WrongAnimal & src );
	~WrongAnimal(  );
	WrongAnimal &	operator=( const WrongAnimal & rhs );

	std::string	getType(  ) const;
	void		makeSound(  ) const;
};

#endif
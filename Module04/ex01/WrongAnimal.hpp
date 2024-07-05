/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 12:23:41 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/02 12:29:15 by ftomazc          ###   ########.fr       */
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
	WrongAnimal( WrongAnimal & src );
	~WrongAnimal(  );
	WrongAnimal &	operator=( const WrongAnimal & rhs );

	std::string	getType(  ) const;
	void		makeSound(  ) const;
};

#endif
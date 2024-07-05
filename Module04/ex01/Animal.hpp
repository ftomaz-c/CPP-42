/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:24:27 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/03 16:38:46 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {

protected:
	std::string	type;

public:
	Animal(  );
	Animal( const Animal & src );
	virtual ~Animal(  );
	Animal &	operator=( const Animal & rhs );

	std::string	getType(  ) const;
	virtual void		makeSound(  ) const;
};

#endif
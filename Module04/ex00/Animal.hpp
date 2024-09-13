/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:24:27 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/13 12:15:12 by ftomaz-c         ###   ########.fr       */
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
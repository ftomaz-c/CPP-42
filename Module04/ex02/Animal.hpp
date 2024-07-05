/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:24:27 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/04 16:39:13 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class AAnimal {

protected:
	std::string	type;

public:
	AAnimal(  );
	AAnimal( const AAnimal & src );
	virtual ~AAnimal(  );
	AAnimal &	operator=( const AAnimal & rhs );

	std::string	getType(  ) const;
	virtual void		makeSound(  ) const = 0;
};

#endif
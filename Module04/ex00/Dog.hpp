/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:36:52 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/02 12:21:16 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{

public:
	Dog(  );
	Dog( Dog & src );
	virtual ~Dog(  );
	Dog &	operator=( const Dog & rhs );

	virtual void	makeSound(  ) const;
};

#endif
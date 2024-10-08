/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:36:52 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/03 16:37:30 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

private:
	Brain	*_brain;

public:
	Dog(  );
	Dog( const Dog & src );
	virtual ~Dog(  );
	Dog &	operator=( const Dog & rhs );

	virtual void	makeSound(  ) const;
	Brain			*getBrain(  ) const;
};

#endif
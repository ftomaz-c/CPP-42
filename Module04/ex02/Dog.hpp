/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:36:52 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/13 16:45:27 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {

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
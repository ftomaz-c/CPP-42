/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:46:28 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/04 16:30:54 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal {

private:
	Brain	*_brain;

public:
	Cat(  );
	Cat( const Cat & src );
	virtual ~Cat(  );
	Cat & operator=( const Cat & rhs );

	virtual void	makeSound(  ) const ;
	Brain			*getBrain(  ) const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:46:28 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/13 16:45:22 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
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
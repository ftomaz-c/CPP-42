/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:46:28 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/02 12:16:54 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{

public:
	Cat(  );
	Cat( Cat & src );
	virtual ~Cat(  );
	Cat & operator=( const Cat & rhs );

	virtual void	makeSound(  ) const ;
};

#endif
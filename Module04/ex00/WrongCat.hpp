/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 12:24:04 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/02 12:29:24 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

public:
	WrongCat(  );
	WrongCat( WrongCat & src );
	~WrongCat(  );
	WrongCat & operator=( const WrongCat & rhs );

	void	makeSound(  ) const ;
};

#endif
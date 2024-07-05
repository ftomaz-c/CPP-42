/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:09:41 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/03 16:40:40 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {

private:
	std::string	_ideas[100];

public:
	Brain(  );
	Brain( const Brain & src );
	~Brain(  );
	Brain &	operator=( const Brain & rhs );

	void		setIdea ( int index, std::string idea );
	std::string	getIdea ( int index ) const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 12:30:26 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/13 17:35:29 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource {
	
public:
	virtual ~IMateriaSource(  ) {};
	virtual void learnMateria( AMateria* ) = 0;
	virtual AMateria* createMateria( std::string const & type ) = 0;

};

#endif
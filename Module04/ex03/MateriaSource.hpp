/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 12:56:47 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/05 13:11:34 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource{

private:
	AMateria	*_materias[4];

public:
	MateriaSource(  );
	MateriaSource( const MateriaSource & src );
	~MateriaSource(  );

	MateriaSource &	operator=( const MateriaSource & rhs );

	void	learnMateria( AMateria *m );
	virtual AMateria* createMateria(std::string const & type);

};

#endif
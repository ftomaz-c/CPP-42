/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:33:29 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/05 14:57:48 by ftomazc          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rpg.hpp"

int	main ( void ) {

	Character	frodo("Frodo");
	Character	gollum("Gollum");

	AMateria	*materia1 = new Ice;
	AMateria	*materia2 = new Ice;
	AMateria	*materia3 = new Cure;
	AMateria	*materia4 = new Cure;
	AMateria	*materia5 = new Cure;

	std::cout << "My name is " << frodo.getName() << std::endl;
	std::cout << "My name is " << gollum.getName() << std::endl;
	std::cout << "Character " << gollum.getName() << " found " << materia1->getType() << " on the floor" << std::endl;

	frodo.equip( materia1 );
	frodo.equip( materia2 );
	frodo.equip( materia3 );
	frodo.equip( materia4 );
	frodo.equip( materia5 );
	frodo.use( 0, gollum );
	frodo.use( 2, gollum );
	frodo.unequip( 0 );
	frodo.unequip( 1 );
	frodo.unequip( 0 );

	delete materia5;

	//-----------------------------------//

	std::cout << std::endl << "-----MateriaSource-----" << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
}
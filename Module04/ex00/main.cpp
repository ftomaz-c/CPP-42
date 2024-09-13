/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:56:08 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/13 11:57:20 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main( void ) {

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete	meta;
	delete	i;
	delete	j;
	
	std::cout << "\n\t-----------\n" << std::endl; 
	
	const WrongAnimal* k = new WrongAnimal();
	const WrongAnimal* l1 = new WrongCat();
	const WrongCat* l2 = new WrongCat();
	
	std::cout << l1->getType() << " " << std::endl;
	std::cout << l2->getType() << " " << std::endl;
	
	k->makeSound();
	l1->makeSound();
	l2->makeSound();
	
	delete	k;
	delete	l1;
	delete	l2;
	return ( 0 );
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomaz-c <ftomaz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:56:08 by ftomazc           #+#    #+#             */
/*   Updated: 2024/09/13 17:09:29 by ftomaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main( void ) {

	int n = 10;
	Animal	*animal[n];

	for ( int i = 0; i < n / 2 ; i++ ) {
		std::cout << i << ". " << std::endl;
		animal[i] = new	Dog();
	}
	for ( int j = n / 2 ; j < n; j++) {
		std::cout << j << ". " << std::endl;
		animal[j] = new	Cat();
	}
	for ( int i = 0; i < n; i++ ) {
		std::cout << i + 1 << ". ";
		animal[i]->makeSound();
	}

	{
		std::cout << std::endl << "\t---------- DOG ----------\n" << std::endl;

		Dog *originalDog = new Dog;
		originalDog->makeSound();
		originalDog->getBrain()->setIdea(-1, "Chase the cat");
		originalDog->getBrain()->setIdea(101, "Chase the cat");
		originalDog->getBrain()->setIdea(0, "Chase the cat");
		
		std::cout << std::endl << "---------- deep copy ----------" << std::endl;
		
		Dog copiedDog1 (*originalDog);
		copiedDog1.makeSound();
		
		Dog copiedDog2;
		copiedDog2 = *originalDog;
		copiedDog2.makeSound();

		std::cout << "Original Dog's Brain Idea: " << originalDog->getBrain()->getIdea(0) << std::endl;
		std::cout << "Copied Dog1's Brain Idea: " << copiedDog1.getBrain()->getIdea(0) << std::endl;
		std::cout << "Copied Dog2's Brain Idea: " << copiedDog2.getBrain()->getIdea(0) << std::endl;

		originalDog->getBrain()->setIdea(0, "Bark at the mailman");
		copiedDog1.getBrain()->setIdea(0, "Sleep all day");
		copiedDog2.getBrain()->setIdea(0, "Squirrel!");

		std::cout << "Original Dog's Brain Idea: " << originalDog->getBrain()->getIdea(0) << std::endl;
		std::cout << "Copied Dog1's Brain Idea: " << copiedDog1.getBrain()->getIdea(0) << std::endl;
		std::cout << "Copied Dog2's Brain Idea: " << copiedDog2.getBrain()->getIdea(0) << std::endl;
		std::cout << "Original Dog's Brain Address: " << originalDog->getBrain() << std::endl;
		std::cout << "Copied Dog1's Brain Address: " << copiedDog1.getBrain() << std::endl;
		std::cout << "Copied Dog2's Brain Address: " << copiedDog2.getBrain() << std::endl;

		delete originalDog;
	}
	std::cout << "------------------------" << std::endl;
	{
		std::cout << std::endl << "\t---------- CAT ----------\n" << std::endl;

		Cat *originalCat = new Cat;
		originalCat->makeSound();
		originalCat->getBrain()->setIdea(-1, "Chase the rat");
		originalCat->getBrain()->setIdea(101, "Chase the rat");
		originalCat->getBrain()->setIdea(0, "Chase the rat");
		
		std::cout << std::endl << "---------- deep copy ----------" << std::endl;
		
		Cat copiedCat1 (*originalCat);
		copiedCat1.makeSound();
		
		Cat copiedCat2;
		copiedCat2 = *originalCat;
		copiedCat2.makeSound();

		std::cout << "Original Dog's Brain Idea: " << originalCat->getBrain()->getIdea(0) << std::endl;
		std::cout << "Copied Dog1's Brain Idea: " << copiedCat1.getBrain()->getIdea(0) << std::endl;
		std::cout << "Copied Dog2's Brain Idea: " << copiedCat2.getBrain()->getIdea(0) << std::endl;

		originalCat->getBrain()->setIdea(0, "Bark at the mailman");
		copiedCat1.getBrain()->setIdea(0, "Sleep all day");
		copiedCat2.getBrain()->setIdea(0, "Squirrel!");

		std::cout << "Original Dog's Brain Idea: " << originalCat->getBrain()->getIdea(0) << std::endl;
		std::cout << "Copied Dog1's Brain Idea: " << copiedCat1.getBrain()->getIdea(0) << std::endl;
		std::cout << "Copied Dog2's Brain Idea: " << copiedCat2.getBrain()->getIdea(0) << std::endl;
		std::cout << "Original Dog's Brain Address: " << originalCat->getBrain() << std::endl;
		std::cout << "Copied Dog1's Brain Address: " << copiedCat1.getBrain() << std::endl;
		std::cout << "Copied Dog2's Brain Address: " << copiedCat2.getBrain() << std::endl;

		delete originalCat;
	}
	std::cout << std::endl << "---------- delete array ----------" << std::endl;
	
	for ( int i = 0; i < n; i++ ) {
		delete animal[i];
	}
	return ( 0 );
}
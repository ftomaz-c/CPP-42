/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftomazc < ftomaz-c@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:56:08 by ftomazc           #+#    #+#             */
/*   Updated: 2024/07/03 16:50:02 by ftomazc          ###   ########.fr       */
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
		std::cout << i << ". ";
		animal[i]->makeSound();
	}

	for ( int i = 0; i < n; i++ ) {
		delete animal[i];
	}
	std::cout << std::endl << "---------- Deep copy ----------" << std::endl;

	Dog *originalDog = new Dog;
	originalDog->makeSound();
	originalDog->getBrain()->setIdea(0, "Chase the cat");
	
	Dog copiedDog1 (*originalDog);
	copiedDog1.makeSound();
	
	Dog copiedDog2;
	delete copiedDog2.getBrain();
	copiedDog2 = *originalDog;
	copiedDog2.makeSound();

	std::cout << "Original Dog's Brain Idea: " << originalDog->getBrain()->getIdea(0) << std::endl;
	std::cout << "Copied Dog1's Brain Idea: " << copiedDog1.getBrain()->getIdea(0) << std::endl;
	std::cout << "Copied Dog2's Brain Idea: " << copiedDog2.getBrain()->getIdea(0) << std::endl;

	originalDog->getBrain()->setIdea(1, "Bark at the mailman");
	copiedDog1.getBrain()->setIdea(1, "Sleep all day");
	copiedDog2.getBrain()->setIdea(1, "Squirrel!");

	std::cout << "Original Dog's Brain Idea: " << originalDog->getBrain()->getIdea(1) << std::endl;
	std::cout << "Copied Dog1's Brain Idea: " << copiedDog1.getBrain()->getIdea(1) << std::endl;
	std::cout << "Copied Dog2's Brain Idea: " << copiedDog2.getBrain()->getIdea(1) << std::endl;
	std::cout << "Original Dog's Brain Address: " << originalDog->getBrain() << std::endl;
	std::cout << "Copied Dog1's Brain Address: " << copiedDog1.getBrain() << std::endl;
	std::cout << "Copied Dog2's Brain Idea: " << copiedDog2.getBrain() << std::endl;

	delete originalDog;
	return ( 0 );
}
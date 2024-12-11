/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:31:21 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/11 10:49:36 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define NBANIMALS 10

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <cstdlib>

int main()
{
	cout << endl << YELLOW << "test Animaux : " << endl;

	cout << GREEN << "Animals constructors : " << RESET << endl;
	// const Animal* animal = new Animal();
	const Animal* cat = new Cat();
	const Animal* dog = new Dog();

	cout << endl << GREEN << "Wrong animals constructors : " << RESET << endl;
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	cout << endl << GREEN << "get types of animals : " << RESET << endl;
	cout << cat->getType() << endl;
	cout << dog->getType() << endl;

	cout << endl << GREEN << "get type of wrong animal : " << RESET << endl;
	cout << wrongCat->getType() << endl;

	cout << endl << GREEN << "Sound of animals : " << RESET << endl;
	cat->makeSound();
	dog->makeSound();
	// animal->makeSound();

	cout << endl << GREEN << "Sound of wrong animals : " << RESET << endl;
	wrongCat->makeSound();
	wrongAnimal->makeSound();

	cout << endl << RED << "Animals destructors : " << RESET << endl;
	// delete animal;
	delete cat;
	delete dog;
	cout << endl << RED << "Wrong animals destructors : " << RESET << endl;
	delete wrongAnimal;
	delete wrongCat;
	
	cout << endl << YELLOW << "test brains : " << endl;

	srand (time(NULL));
	cout << GREEN << "Animals constructors : " << RESET << endl;
	Animal* tab[NBANIMALS];

	for (int i = 0; i < NBANIMALS; i++)
	{
		cout << endl << GREEN << "Animals constructors : " << RESET << endl;
		int randAnim = rand() % 2 + 1;
		switch (randAnim)
		{
		case 1:
			tab[i] = new Cat;
			break;
		case 2:
			tab[i] = new Dog;
			break;
		default:
			break;
		}
	}

	for (int i = 0; i < NBANIMALS; i++) {
		cout << endl << GREEN << "Sound of animal : " << RESET << endl;
		tab[i]->makeSound();
		cout << endl << RED << "Animal destructor : " << RESET << endl;
		delete tab[i];
	}

	return (0);
}

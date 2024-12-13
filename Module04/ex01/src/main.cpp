/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:31:21 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/13 10:49:25 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define NBANIMALS 10

#include <iostream>
#include <cstdlib>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
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

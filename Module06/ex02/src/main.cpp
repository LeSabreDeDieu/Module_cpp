/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sayfallahgabsi <sayfallahgabsi@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:54:53 by sayfallahga       #+#    #+#             */
/*   Updated: 2025/01/16 14:20:19 by sayfallahga      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <unistd.h>

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

using std::cout;
using std::endl;

Base *generate( void ) {
	
	srand (time(NULL));

	switch (rand() % 3)
	{
		case 0:
			return (new A);
			break;
		case 1:
			return (new B);
			break;
		case 2:
			return (new C);
			break;
		default:
			break;
	};
	return (NULL);
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p)) {
		cout << "A" << endl;
	}
	else if (dynamic_cast<B*>(p)) {
		cout << "B" << endl;
	}
	else if (dynamic_cast<C*>(p)) {
		cout << "C" << endl;
	}
	else {
		cout << "Inconnu" << endl;
	}
}

void identify(Base& p) {
	try {
		A& a = dynamic_cast<A&>(p);
		cout << "A" << endl;
		(void)a;
		return ;
	} catch (...) {}
	
	try {
		B& b = dynamic_cast<B&>(p);
		cout << "B" << endl;
		(void)b;
		return ;
	} catch (...) {}

	try {
		C& c = dynamic_cast<C&>(p);
		cout << "C" << endl;
		(void)c;
		return ;
	} catch (...) {}
	
	cout << "Inconnu" << endl;
}

int main( void )
{
	for (int i = 0; i < 10; i++) {
		Base *b = generate();
		
		cout << "test identification par pointer : " << endl;
		identify(b);

		cout << "test identification par reference : " << endl;
		identify(*b);
		usleep(10);
	}

	return 0;
}

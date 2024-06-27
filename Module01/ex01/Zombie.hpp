#ifndef __Zombie_HPP__
#define __Zombie_HPP__

#include <iostream>
#include <string>

using std::string;

class Zombie
{
private:
	/* data */
	string _nom;
public:
	void announce( void );
	Zombie();
	Zombie(string name);
	~Zombie();
};

Zombie* zombieHorde(int N, string name);

#endif // __Zombie_HPP__
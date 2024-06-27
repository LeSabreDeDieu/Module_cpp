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
	Zombie(string name);
	~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif // __Zombie_HPP__
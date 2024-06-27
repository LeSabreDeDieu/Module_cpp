#include "Zombie.hpp"

int main()
{
	Zombie *zombie = newZombie("Foo");
	zombie->announce();
	delete(zombie);

	randomChump("Bar");

	Zombie anotherZombie = Zombie("FooBar");
	anotherZombie.announce();
	return 0;
}

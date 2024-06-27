#include "Zombie.hpp"

using std::cout;
using std::endl;

Zombie::Zombie (string nom) :
	_nom(nom)
{}

Zombie::~Zombie() {
	cout << this->_nom << endl;
}

void Zombie::announce() {
	cout << this->_nom << ": BraiiiiiiinnnzzzZ..." << endl;
}
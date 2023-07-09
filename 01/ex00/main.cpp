#include "Zombie.hpp"

int main()
{
	Zombie *z = newZombie("yahya");
	randomChump("simo");
	z->announce();
	delete z;
}

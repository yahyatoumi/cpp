#include "Zombie.hpp"

int main()
{
	Zombie *z = zombieHorde(5, "yahya");

	for (int i = 0; i < 5; i++){
		z[i].announce();
	}
	delete []z;
}

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int main()
{
	Zombie *zombies;
	int		i;

	zombies = zombieHorde(5, "Rick");
	i = 0;
	while (i < 5)
	{
		zombies[i].announce();
		i++;
	}
	delete [] zombies;
	return (0);
}
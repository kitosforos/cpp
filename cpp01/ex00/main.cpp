#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void    randomChump( std::string name );

int main()
{
    Zombie *zombie;

    zombie = newZombie("Rick");
    zombie->announce();
    randomChump("Steven");
    delete zombie;
	return(0);
}
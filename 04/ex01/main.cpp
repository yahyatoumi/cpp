#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void ff()
{
    system("leaks out");
}

int main()
{
    atexit(ff);
    Animal *animals[4];
    Animal *animals2[2];

    for (int i = 0; i < 2; i++)
    {
        animals[i] = new Dog();
        animals[i + 2] = new Cat();
    }
    animals2[0] = animals[0];
    animals2[1] = animals[2];

    for (int i = 0; i < 4; i++)
    {
        delete animals[i];
    }
    return 0;
}
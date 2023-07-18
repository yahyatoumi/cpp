#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal *animals[4];
    Animal *animals2[2];

    for (int i = 0; i < 2; i++)
    {
        animals[i] = new Dog();
        animals[i + 2] = new Cat();
    }

    for (int i = 0; i < 4; i++)
    {
        delete animals[i];
    }
    return 0;
}
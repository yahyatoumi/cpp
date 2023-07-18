#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// void f(){
//     system("leaks out");
// }

int main()
{
    // atexit(f);
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();
    Animal meta2;
    meta2.setType("ANIMALX");
    meta2.makeSound();
    Animal meta3(*meta);
    delete meta;
    delete j;
    delete i;
    return 0;
}
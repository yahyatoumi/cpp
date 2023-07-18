#include "Dog.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog DEFAULT constructor called" << std::endl;
}
Dog::Dog(Dog &toCopy)
{
    this->type = toCopy.type;
    this->brain = new Brain(*toCopy.brain);
    std::cout << "Dog COPY constructor called" << std::endl;
}

Dog::~Dog(void)
{
    delete this->brain;
    std::cout << "Dog DESTRUCTOR called" << std::endl;
}
Dog &Dog::operator=(Dog const &_new)
{
    this->type = _new.type;
    if (this->brain)
        delete this->brain;
    this->brain = new Brain(*_new.brain);
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "The Dog [" << this->type << "] is barking.." << std::endl;
}

Brain *Dog::getBrain(void)
{
    return this->brain;
}
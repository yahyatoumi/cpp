#include "Dog.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
    std::cout << "Dog DEFAULT constructor called" << std::endl;
}
Dog::Dog(Dog &toCopy)
{
    this->type = toCopy.type;
    std::cout << "Dog COPY constructor called" << std::endl;
}
Dog::~Dog(void)
{
    std::cout << "Dog DESTRUCTOR called" << std::endl;
}
Dog &Dog::operator=(Dog const &_new)
{
    this->type = _new.type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "The Dog [" << this->type << "] is barking.." << std::endl;
}
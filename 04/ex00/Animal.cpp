#include "Animal.hpp"

Animal::Animal(void) : type("")
{
    std::cout << "Animal DEFAULT constructor called" << std::endl;
}
Animal::Animal(Animal const &toCopy)
{
    this->type = toCopy.type;
    std::cout << "Animal COPY constructor called" << std::endl;
}
Animal::~Animal(void)
{
    std::cout << "Animal DESTRUCTOR called" << std::endl;
}
Animal &Animal::operator=(Animal const &_new)
{
    this->type = _new.type;
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "The Animal [" << this->type << "] is making sound" << std::endl;
}

std::string Animal::getType(void) const
{
    return this->type;
}

void Animal::setType(std::string type)
{
    this->type = type;
}

#include "Cat.hpp"

Cat::Cat(void)
{
    this->type = "Cat";
    std::cout << "Cat DEFAULT constructor called" << std::endl;
}
Cat::Cat(Cat &toCopy)
{
    this->type = toCopy.type;
    std::cout << "Cat COPY constructor called" << std::endl;
}
Cat::~Cat(void)
{
    std::cout << "Cat DESTRUCTOR called" << std::endl;
}
Cat &Cat::operator=(Cat const &_new)
{
    this->type = _new.type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "The Cat [" << this->type << "] is saing 'meaw meaw'" << std::endl;
}
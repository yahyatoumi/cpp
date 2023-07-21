#include "Cat.hpp"

Cat::Cat(void)
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Cat DEFAULT constructor called" << std::endl;
}
Cat::Cat(Cat &toCopy)
{
    this->brain = new Brain(*toCopy.brain);
    this->type = toCopy.type;
    std::cout << "Cat COPY constructor called" << std::endl;
}
Cat::~Cat(void)
{
    delete this->brain;
    std::cout << "Cat DESTRUCTOR called" << std::endl;
}
Cat &Cat::operator=(Cat const &_new)
{
    if (this == &_new)
        return *this;
    this->type = _new.type;
    if (this->brain)
        delete this->brain;
    this->brain = new Brain(*_new.brain);
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "The Cat [" << this->type << "] is saing 'meaw meaw'" << std::endl;
}

Brain *Cat::getBrain(void)
{
    return this->brain;
}

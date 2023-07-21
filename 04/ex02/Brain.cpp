#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain DEFAULT constructor called" << std::endl;
}
Brain::Brain(Brain &toCopy)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = toCopy.ideas[i];
    std::cout << "Brain COPY constructor called" << std::endl;
}
Brain::~Brain(void)
{
    std::cout << "Brain destructor called" << std::endl;
}
Brain &Brain::operator=(Brain const &_new)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = _new.ideas[i];
    return *this;
}

std::string *Brain::getIdeas()
{
    return this->ideas;
}

void Brain::setIdeas(std::string *ideas, size_t size)
{
    for (unsigned long i = 0; i < size; i++)
    {
        this->ideas[i] = ideas[i];
    }
}
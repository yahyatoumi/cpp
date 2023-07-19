#include "Ice.hpp"

Ice::Ice(void)
{
    this->type = "ice";
}
Ice::Ice(Ice &toCopy)
{
    this->type = toCopy.type;
}
Ice::~Ice(void)
{
}

Ice::Ice(std::string const &type)
{
    this->type = type;
}

Ice &Ice::operator=(Ice const &_new){
}

void Ice::use(ICharacter &target)
{
}

Ice *Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter &target)
{
    std::cout << "* heals " <<  target.getName() << " ’s wounds *" << std::endl;
}

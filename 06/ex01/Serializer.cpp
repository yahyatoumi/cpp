#include "Serializer.hpp"

Serializer::Serializer()
{
    // throw std::invalid_argument("cant use default constructor!!");
}
Serializer::~Serializer()
{
}

Serializer::Serializer(Serializer &toCopy)
{
    (void)toCopy;
}
Serializer &Serializer::operator=(Serializer &toCopy)
{
    (void)toCopy;
    return *this;
}

uintptr_t Serializer::serialize(Data *ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}
Data *Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}
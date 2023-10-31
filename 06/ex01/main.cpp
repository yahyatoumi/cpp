#include "Serializer.hpp"
#include <iostream>

int main()
{
    Data s;

    s.a = 4;
    s.b = 1;
    s.c = 1;
    uintptr_t x = Serializer::serialize(&s);
    Data *s2 = Serializer::deserialize(x);
    std::cout << &s << std::endl << s2 << std::endl << x  << std::endl;

    // *(char *)(x + 6) = 0;
    // *(char *)(x + 7) = 0;
    // std::cout << *(int *)(x + 4) << std::endl;
}
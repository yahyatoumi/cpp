#ifndef SERIALIZER
#define SERIALIZER
#include <iostream>

struct Data{
    int a;
    char b;
    char c;
};

class Serializer
{
private:

public:
    Serializer();
    Serializer(Serializer &toCopy);
    ~Serializer();
    Serializer &operator=(Serializer &toCopy);
    static  uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};

#endif
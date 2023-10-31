#ifndef _ITER
#define _ITER
#include <iostream>

template <class T>
class Array
{
private:
    int len;
    T *arr;

public:
    Array();
    ~Array();
    Array(unsigned int n);
    Array(Array<T> &toCopy);
    int getLen() const;
    T &operator[](int index);
    int size() const;
};

template <typename T>
std::ostream &operator<<(std::ostream &o, Array<T> const &obj)
{
    o << obj.getLen();
    return o;
}


#endif
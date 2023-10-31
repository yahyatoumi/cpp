#include "Array.hpp"

template <class T>
Array<T>::Array()
{
    len = 0;
    arr = new T[0];
}

template <class T>
Array<T>::~Array()
{
    delete arr;
}

template <class T>
Array<T>::Array(unsigned int n)
{
    len = n;
    arr = new T[n];
}
template <class T>
int Array<T>::getLen() const
{
    return this->len;
}

template <class T>
Array<T>::Array(Array<T> &toCopy)
{
    this->len = toCopy.len;
    arr = new T[this->len];
    for (int i = 0; i < this->len; i++)
        this->arr[i] = toCopy.arr[i];
}

template <class T>
T &Array<T>::operator[](int index)
{
    if (index < 0 || index >= this->len)
        throw std::exception();
    return this->arr[index];
}

template <class T>
int Array<T>::size() const
{
    return this->len;
}


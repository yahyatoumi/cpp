#include "iter.hpp"
#include <iostream>

void func(int &x)
{
    x += 1;
}

template <typename T> void func2(T &x)
{
	x += 1;
}

int main()
{
    int arr[3] = {1, 2, 3};
    ::funcTemplate<int, void (*)(int &)>(arr, 3, ::func2<int>);

    int i = 0;
    while (i < 3)
    {
        std::cout << arr[i] << std::endl;
        i++;
    }
    return 0;
}
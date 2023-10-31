#include "Array.hpp"
#include "Array.tpp"
#include <iostream>

// void xx()
// {
//     system("leaks out");

// }

int main()
{
    // atexit(xx);


    int *zz = new int(2);
    Array<int> *x2 = new Array<int>(2);
    Array<int> x(5);

    std::cout << *x2 << *zz << x << std::endl;
    std::cout << x.getLen() << std::endl;
    try{
    std::cout << x[10] << std::endl;
    }catch(std::exception){
        std::cout << "catched an exception" << std::endl;
    }
    delete zz;
    delete x2;
}
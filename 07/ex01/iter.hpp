#ifndef _ITER
#define _ITER
#include <iostream>

template <class ARRAY, class FUNC> void funcTemplate(ARRAY arr[], int len, FUNC func)
{
    int i = 0;

    while (i < len)
    {
        func(arr[i]);
        i++;
    }
    return ;
}
   
#endif
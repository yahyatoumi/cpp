#include <fstream>
#include "RPN.hpp"

int main(int ac, char** av)
{
    if (ac != 2)
    {
        std::cerr << "Error: could not open file." << std::endl;
        return 1;
    }
    try{
	RPN btc(av[1]);
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}
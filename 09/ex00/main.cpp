#include <iostream>
#include <fstream>
#include "BitcoinExchange.hpp"

int main(int ac, char** av)
{
    if (ac != 2)
    {
        std::cerr << "Error: could not open file." << std::endl;
        return 1;
    }
    try{
	BitcoinExchange btc("cpp_09/data.csv");
    btc.printExchanges(av[1]);
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}
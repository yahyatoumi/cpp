#ifndef SCALARCONVERTER
#define SCALARCONVERTER
#include <iostream>
#include <sstream>

class ScalarConverter
{
private:

public:
    ScalarConverter();
    ScalarConverter(ScalarConverter &toCopy);
    ~ScalarConverter();
    static void convert(std::string p);
    ScalarConverter &operator=(ScalarConverter &toCopy);
};

#endif
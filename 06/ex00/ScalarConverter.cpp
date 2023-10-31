#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    // throw std::invalid_argument("cant use default constructor!!");
}
ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(ScalarConverter &toCopy)
{
    (void)toCopy;
}
ScalarConverter &ScalarConverter::operator=(ScalarConverter &toCopy)
{
    (void)toCopy;
    return *this;
}

bool allDigits(std::string str)
{
    int i = 0;

    if (str[i] == '+' || str[i] == '-')
        i++;
    while (str[i])
    {
        if (!isdigit(str[i]))
            return false;
        i++;
    }
    return true;
}

bool isDouble(std::string str)
{
    int i = 0;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while (str[i] && str[i] != '.')
    {
        if (!isdigit(str[i]))
            return false;
        i++;
    }
    if (!str[i])
        return false;
    i++;
    while (str[i])
    {
        if (!isdigit(str[i]))
            return false;
        i++;
    }
    return true;
}
bool isFloat(std::string str)
{
    int i = 0;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while (str[i] && str[i] != '.')
    {
        if (!isdigit(str[i]))
            return false;
        i++;
    }
    if (!str[i])
        return false;
    i++;
    while (str[i] && str[i] != 'f')
    {
        if (!isdigit(str[i]))
            return false;
        i++;
    }
    if (str[i] == 'f' && !str[i + 1])
        return true;
    return false;
}

void ScalarConverter::convert(std::string p)
{
    if (!p.length())
        return;
    if (p.length() == 1 && !isdigit(p[0]))
    {
        char x = p[0];
        std::cout << "char: " << x << std::endl;
        std::cout << "int: " << static_cast<int>(x) << std::endl;
        std::cout << "float: " << static_cast<float>(x) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(x) << std::endl;
    }
    else if (allDigits(p))
    {
        int x = atoi(p.c_str());
        if (isprint(atoi(p.c_str())))
            std::cout << "char: " << static_cast<char>(x) << std::endl;
        else
            std::cout << "char:  Non displayable" << std::endl;
        std::cout << "int: " << x << std::endl;
        std::cout << "float: " << static_cast<float>(x) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(x) << std::endl;
    }
    else if (isDouble(p))
    {
        double x = stod(p);
        if (isprint(atoi(p.c_str())))
            std::cout << "char: " << static_cast<char>(x) << std::endl;
        else
            std::cout << "char: impossible" << std::endl;
        std::cout << "int: " << static_cast<int>(x) << std::endl;
        std::cout << "float: " << static_cast<float>(x) << "f" << std::endl;
        std::cout << "double: " << x << std::endl;
    }
    else if (isFloat(p))
    {
        float x = stof(p);
        if (isprint(atoi(p.c_str())))
            std::cout << "char: " << static_cast<char>(x) << std::endl;
        else
            std::cout << "char: impossible" << std::endl;
        std::cout << "int: " << static_cast<int>(x) << std::endl;
        std::cout << "float: " << x << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(x) << std::endl;
    }
    else if (p == "+inf" || p == "+inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
    }
    else if (p == "-inf" || p == "-inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
    }
    else
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
}
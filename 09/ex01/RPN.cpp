#include "RPN.hpp"

RPN::RPN()
{
    throw std::logic_error("cant use parametrless RPN constructor");
}
RPN::RPN(std::string operations)
{
    int i = 0;
    int first;
    int second;

    while (operations[i])
    {
        if (operations[i] != ' ' && operations[i] != '-' && operations[i] != '+' && operations[i] != '/' && operations[i] != '*' && !std::isdigit(operations[i]))
        {
            std::cout << "Error1" << std::endl;
            return;
        }
        i++;
    }
    i = 0;
    while (operations[i])
    {
        if (operations[i] != ' ' && operations[i] != '-' && operations[i] != '+' && operations[i] != '/' && operations[i] != '*')
        {
            this->S.push(operations[i] - 48);
        }
        else if (operations[i] != ' ' && !std::isdigit(operations[i]))
        {
            if (this->S.size() == 1)
            {
                std::cout << "error" << std::endl;
                return;
            }
            if (this->S.size() >= 2)
            {
                second = this->S.top();
                this->S.pop();
                first = this->S.top();
                this->S.pop();
                if (operations[i] == '*')
                    this->S.push(first * second);
                else if (operations[i] == '/')
                {
                    if (second == 0)
                        throw std::logic_error("Error: / 0 ");
                    this->S.push(first / second);
                }
                else if (operations[i] == '+')
                    this->S.push(first + second);
                else if (operations[i] == '-')
                    this->S.push(first - second);
            }
        }
        i++;
    }
    if (this->S.size() == 1)
    {
        std::cout << this->S.top() << std::endl;
    }
    else 
        std::cout << "Error" << std::endl;
}
RPN::RPN(RPN &toCopy)
{
    this->S = toCopy.S;
}
RPN &RPN::operator=(RPN &toCopy)
{
    this->S = toCopy.S;
    return *this;
}
RPN::~RPN()
{
}
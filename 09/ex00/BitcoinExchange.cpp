#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    throw std::logic_error("cant use parameterless BitcoinExchange::constructor");
}
BitcoinExchange::BitcoinExchange(BitcoinExchange &toCopy) : dataMap(toCopy.dataMap)
{
}

bool isAllDigits(std::string str)
{
    unsigned long i = 0;
    int points = 0;
    while (i < str.length())
    {
        if (str[i] == '.')
            points++;
        i++;
    }
    if (points > 1)
        return false;
    i = 0;
    while (i < str.length())
    {
        if (!std::isdigit(str[i]) && str[i] != '.')
            return false;
        i++;
    }
    return true;
}

bool isDateValid(std::string date)
{
    if (date[4] != '-' || date[7] != '-' || !std::isdigit(date[0]) || !std::isdigit(date[1]) || !std::isdigit(date[2]) || !std::isdigit(date[3]) || !std::isdigit(date[5]) || !std::isdigit(date[6]) || !std::isdigit(date[8]) || !std::isdigit(date[9]))
    {
        std::cout << "Error: date not valide " << date << std::endl;
        return false;
    }
    std::string month = "  ";
    month[0] = date[5];
    month[1] = date[6];
    if (month > "12")
    {
        std::cout << "Error: date not valide " << date << std::endl;
        return false;
    }
    std::string day = "  ";
    day[0] = date[8];
    day[1] = date[9];
    if (day > "31")
    {
        std::cout << "Error: date not valide " << date << std::endl;
        return false;
    }
    if (((month == "02" && day > "28") && std::atoi(date.substr(0, 4).c_str()) % 4 ) || (month == "02" && day > "29") || (month == "04" && day == "31") || (month == "06" && day == "31")
    || (month == "09" && day == "31") || (month == "11" && day == "31"))
    {
        std::cout << "Error: date not valide " << date << std::endl;
        return false;
    }
    return true;
}

BitcoinExchange::BitcoinExchange(std::string data_file)
{
    std::string buff;
    std::ifstream dataStream(data_file);
    if (!dataStream)
    {
        std::cout << "Failed to open the file" << std::endl;
        return;
    }
    std::getline(dataStream, buff);
    if (buff != "date,exchange_rate")
        throw std::logic_error("first line in data file");

    while (std::getline(dataStream, buff))
    {
        std::string date = buff.substr(0, 10);
        std::string price = buff.substr(11, buff.length());
        dataMap.insert(std::pair<std::string, double>(date, std::atof(price.c_str())));
    }
    dataStream.close();
}

void BitcoinExchange::printExchanges(std::string input_file)
{
    std::ifstream inputStream(input_file);
    if (!inputStream)
    {
        std::cout << "Failed to open the file" << std::endl;
        return;
    }
    std::string buff;

    std::getline(inputStream, buff);
    if (buff != "date | value")
        throw std::logic_error("first line in input file");
    std::map<std::string, double>::iterator itr;

    while (std::getline(inputStream, buff))
    {
        if (buff.length() < 14)
        {
            std::cout << "Error: bad input => " << buff << std::endl;
            continue;
        }
        if (!isDateValid(buff.substr(0, 10)))
            continue;
        if (buff[10] != ' ' || buff[11] != '|' || buff[12] != ' ')
        {
            std::cout << "err " << buff << std::endl;
            continue;
        }
        else if (buff[13] == '-')
        {
            std::cout << "Error: not a positive number." << std::endl;
            continue;
        }
        if (!isAllDigits(buff.substr(13, buff.length())))
        {
            std::cout << "Error: bad input => " << buff << std::endl;
            continue;
        }
        if (buff.substr(13, buff.length()).length() > 4 || std::atof(buff.substr(13, buff.length()).c_str()) > 1000)
        {
            std::cout << "Error: too large a number." << std::endl;
            continue;
        }
        if (buff.substr(0, 10) < "2009-01-02")
        {
            std::cout << buff.substr(0, 10) << " => " << buff.substr(13) << " = " << 0 << std::endl;
        }
        else {
            itr = --dataMap.upper_bound(buff.substr(0, 10));
            std::cout << buff.substr(0, 10) << " => " << buff.substr(13) << " = " << itr->second * std::atof(buff.substr(13, buff.length()).c_str()) << std::endl;
        }
    }
    inputStream.close();
}

BitcoinExchange::~BitcoinExchange()
{
}
BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange &toCopy)
{
    this->dataMap = toCopy.dataMap;
    return *this;
}
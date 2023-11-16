/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:43:00 by ytoumi            #+#    #+#             */
/*   Updated: 2023/11/09 18:02:05 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE
#define BITCOINEXCHANGE
#include <iostream>
#include <fstream>
#include <map>

class BitcoinExchange
{
private:
    std::map<std::string, double> dataMap;

public:
    BitcoinExchange();
    BitcoinExchange(BitcoinExchange &toCopy);
    BitcoinExchange(std::string data_file);
    void printExchanges(std::string input_file);
    ~BitcoinExchange();
    BitcoinExchange &operator=(BitcoinExchange &toCopy);
};

#endif
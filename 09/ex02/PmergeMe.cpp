/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:59:33 by ytoumi            #+#    #+#             */
/*   Updated: 2023/11/16 16:36:40 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
    throw std::logic_error("cant use PmergeMe default constructor");
}

PmergeMe::PmergeMe(PmergeMe &toCopy)
{
    this->V = toCopy.V;
    this->V2 = toCopy.V2;
    this->D = toCopy.D;
    this->D2 = toCopy.D2;
}

void PmergeMe::mergeSortVector(std::vector<std::vector<int> > &vect)
{
    if (vect.size() <= 1)
        return;

    std::vector<std::vector<int> > left, right;
    int j = 0;
    for (int i = 0; i < ((int)vect.size() / 2); i++)
    {
        std::vector<int> tmp(2);
        tmp[0] = vect[i][0];
        tmp[1] = vect[i][1];
        left.push_back(tmp);
    }
    j = 0;
    for (int i = vect.size() / 2; i < (int)vect.size(); i++)
    {
        std::vector<int> tmp(2);
        tmp[0] = vect[i][0];
        tmp[1] = vect[i][1];
        right.push_back(tmp);
    }

    mergeSortVector(left);
    mergeSortVector(right);

    vect.clear();
    while (!left.empty() && !right.empty())
    {
        if (left.front()[0] < right.front()[0])
        {
            vect.push_back(left.front());
            left.erase(left.begin());
        }
        else
        {
            vect.push_back(right.front());
            right.erase(right.begin());
        }
    }
    for (int i = 0; i < (int)left.size(); i++)
    {
        std::vector<int> tmp(2);
        tmp[0] = left[i][0];
        tmp[1] = left[i][1];
        vect.push_back(tmp);
    }
    for (int i = 0; i < (int)right.size(); i++)
    {
        std::vector<int> tmp(2);
        tmp[0] = right[i][0];
        tmp[1] = right[i][1];
        vect.push_back(tmp);
    }
}

void PmergeMe::mergeSortDeque(std::deque<std::deque<int> > &deq)
{
    if (deq.size() <= 1)
        return;

    std::deque<std::deque<int> > left, right;
    int j = 0;
    for (int i = 0; i < ((int)deq.size() / 2); i++)
    {
        std::deque<int> tmp(2);
        tmp[0] = deq[i][0];
        tmp[1] = deq[i][1];
        left.push_back(tmp);
    }
    j = 0;
    for (int i = deq.size() / 2; i < (int)deq.size(); i++)
    {
        std::deque<int> tmp(2);
        tmp[0] = deq[i][0];
        tmp[1] = deq[i][1];
        right.push_back(tmp);
    }

    mergeSortDeque(left);
    mergeSortDeque(right);

    deq.clear();
    while (!left.empty() && !right.empty())
    {
        if (left.front()[0] < right.front()[0])
        {
            deq.push_back(left.front());
            left.erase(left.begin());
        }
        else
        {
            deq.push_back(right.front());
            right.erase(right.begin());
        }
    }
    for (int i = 0; i < (int)left.size(); i++)
    {
        std::deque<int> tmp(2);
        tmp[0] = left[i][0];
        tmp[1] = left[i][1];
        deq.push_back(tmp);
    }
    for (int i = 0; i < (int)right.size(); i++)
    {
        std::deque<int> tmp(2);
        tmp[0] = right[i][0];
        tmp[1] = right[i][1];
        deq.push_back(tmp);
    }
}

void PmergeMe::printSortedVector()
{
    int i;

    i = 0;
    while (i < (int)this->V.size())
    {
        std::cout << this->V[i] << std::endl;
        i++;
    }
}

void PmergeMe::insertSortVector(std::vector<std::vector<int> > &vect)
{
    std::vector<int> v2(vect.size());
    for (int i = 0; i < (int)vect.size(); i++)
    {
        v2[i] = vect[i][0];
    }
    for (int i = 0; i < (int)vect.size(); i++)
    {
        std::vector<int>::iterator up = std::upper_bound(v2.begin(), v2.end(), vect[i][1]);
        v2.insert(up, vect[i][1]);
    }
    if (v2[0] == -1)
        v2.erase(v2.begin());
    this->V = v2;
}
void PmergeMe::insertSortDeque(std::deque<std::deque<int> > &deq)
{
    std::deque<int> d2(deq.size());
    for (int i = 0; i < (int)deq.size(); i++)
    {
        d2[i] = deq[i][0];
    }
    for (int i = 0; i < (int)deq.size(); i++)
    {
        std::deque<int>::iterator up = std::upper_bound(d2.begin(), d2.end(), deq[i][1]);
        d2.insert(up, deq[i][1]);
    }
    if (d2[0] == -1)
    d2.pop_front();
    this->D = d2;
}

PmergeMe::PmergeMe(char **av, int ac)
{
    clock_t start_time = clock();
    int i = 1;
    while (i < ac)
    {
        std::vector<int> tmp(2);
        tmp[0] = std::atoi(av[i]);
        if (i + 1 == ac)
            tmp[1] = -1;
        else
            tmp[1] = std::atoi(av[i + 1]);
        if (tmp[1] < tmp[0])
            std::swap(tmp[1], tmp[0]);
        this->V2.push_back(tmp);
        i += 2;
    }
    mergeSortVector(this->V2);
    insertSortVector(this->V2);
    clock_t end_time = clock();

    clock_t start_time2 = clock();
    i = 1;
    while (i < ac)
    {
        std::deque<int> tmp(2);
        tmp[0] = std::atoi(av[i]);
        if (i + 1 == ac)
            tmp[1] = -1;
        else
            tmp[1] = std::atoi(av[i + 1]);
        if (tmp[1] < tmp[0])
            std::swap(tmp[1], tmp[0]);
        this->D2.push_back(tmp);
        i += 2;
    }
    mergeSortDeque(this->D2);
    insertSortDeque(this->D2);
    clock_t end_time2 = clock();

    std::cout << std::endl
              << "After: ";
    for (int j = 0; j < (int)this->V.size(); j++)
        std::cout << " " << this->V[j];
    std::cout << std::endl;
    double elapsed_time = static_cast<double>(end_time - start_time);
    double elapsed_time2 = static_cast<double>(end_time2 - start_time2);
    std::cout.precision(5);
    std::cout << std::endl
              << "Time to process a range of " << this->V.size() << " elements with std::vector : " << std::fixed << elapsed_time << " us" << std::endl;
    std::cout << std::endl
              << "Time to process a range of " << this->D.size() << " elements with std::deque : " << std::fixed << elapsed_time2 << " us" << std::endl;
}

PmergeMe::~PmergeMe()
{
}

PmergeMe &PmergeMe::operator=(PmergeMe &toCopy)
{
    this->V = toCopy.V;
    this->V2 = toCopy.V2;
    this->D = toCopy.D;
    this->D2 = toCopy.D2;
    return *this;
}

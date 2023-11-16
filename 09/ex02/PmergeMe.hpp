/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:39:39 by ytoumi            #+#    #+#             */
/*   Updated: 2023/11/11 18:59:55 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME
#define PMERGEME

#include <iostream>
#include <vector>
#include <deque>

class PmergeMe
{
private:
    std::vector<int> V;
    std::vector<std::vector<int> > V2;
    std::deque<int> D;
    std::deque<std::deque<int> > D2;

public:
    PmergeMe();
    PmergeMe(PmergeMe &toCopy);
    PmergeMe(std::vector<std::vector<int> > v);
    PmergeMe(char **av, int ac);
    ~PmergeMe();
    PmergeMe &operator=(PmergeMe &toCopy);
    void mergeSortVector(std::vector<std::vector<int> > &vect);
    void insertSortVector(std::vector<std::vector<int> > &v);
    void insertSortDeque(std::deque<std::deque<int> > &deq);
    void mergeSortDeque(std::deque<std::deque<int> > &deq);
    void printSortedVector();
};

#endif
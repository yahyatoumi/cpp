/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:33:37 by ytoumi            #+#    #+#             */
/*   Updated: 2023/11/06 22:47:56 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    throw std::logic_error("cant use default, must use constructor(unsignrd int)");
}
Span::Span(const unsigned int n)
{
    N = n;
}
Span::Span(const Span &toCopy)
{
    this->N = toCopy.N;
}
Span &Span::operator=(Span &toCopy)
{
    this->N = toCopy.N;
    return *this;
}
Span::~Span()
{
}
void Span::addNumber(int nbr)
{
    if (this->S.size() == this->N)
        throw std::logic_error("cant add another element: set already full");
    S.insert(nbr);
}

int Span::shortestSpan() const
{
    int span = *(--S.end()) - *(S.begin());
    std::set<int>::iterator itr;
    int holder;

    for (itr = --S.end(); itr != S.begin(); --itr)
    {
        holder = (*itr) - *(--itr);
        itr++;
        if (holder < span)
            span = holder;
    }
    return span;
}
int Span::longestSpan() const
{
    return *(--S.end()) - *(S.begin());
}

void Span::addRange(int start, int end){
    if (start < end){
        while (start < end){
            addNumber(start);
            start++;
        }
        addNumber(end);
    }
    else if (start > end){
        while (start > end){
            addNumber(start);
            start--;
        }
        addNumber(end);
    }
    else 
        addNumber(start);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:14:31 by ytoumi            #+#    #+#             */
/*   Updated: 2023/11/08 14:29:36 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <set>

class Span{
private:
    unsigned int N;
public:
    std::set<int> S;
    Span();
    Span(const unsigned int n);
    Span(const Span &toCopy);
    Span &operator=(Span &toCopy);
    ~Span();
    void addNumber(int nbr);
    int shortestSpan() const;
    int longestSpan() const;
    void addRange(int start, int end);
};

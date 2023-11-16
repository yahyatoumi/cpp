/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:28:48 by ytoumi            #+#    #+#             */
/*   Updated: 2023/11/09 19:34:52 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _RPN_
#define _RPN_
#include <iostream>
#include <stack>

class RPN{
private:
    std::stack<int> S;

public:
    RPN();
    RPN(std::string operations);
    RPN(RPN &toCopy);
    RPN &operator=(RPN &toCopy);
    ~RPN();
};

#endif
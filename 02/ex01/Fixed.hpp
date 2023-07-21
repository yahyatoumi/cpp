/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 13:31:41 by ytoumi            #+#    #+#             */
/*   Updated: 2023/07/14 13:31:42 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS
#define FIXED_CLASS

#include <iostream>

class Fixed
{
private:
    int value;
    static const int farctional_bits = 8;

public:
    Fixed(void);
    Fixed(Fixed const &src);
    ~Fixed(void);

    int getRawBits(void) const;
    void setRawBits(int const raw);
    int getFractional(void) const;
    Fixed &operator=(Fixed const &_new);

    // ex01
    Fixed(int const i_value);
    Fixed(float const f_value);
    float toFloat(void) const;
    int toInt(void) const;
};
std::ostream &operator<<(std::ostream &o, Fixed const &fixed);

#endif
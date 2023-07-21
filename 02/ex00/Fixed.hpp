/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 13:31:32 by ytoumi            #+#    #+#             */
/*   Updated: 2023/07/14 13:31:33 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS
#define FIXED_CLASS

#include <iostream>

class Fixed{
    private:
        int value;
        static const int farctinal_bits = 8;

    public:
        Fixed(void);
        Fixed(Fixed const &src);
        ~Fixed(void);

        int getRawBits(void) const;
        void setRawBits(int const raw);
        Fixed   & operator=(Fixed const &_new);
};

#endif
#ifndef FIXED_CLASS
#define FIXED_CLASS

#include <iostream>

class Fixed{
    private:
        int value;
        static const int farctional_bits = 8;

    public:
        Fixed(void);
        Fixed(Fixed const &src);
        ~Fixed(void);


        int getRawBits(void) const;
        void setRawBits(int const raw);
        Fixed   & operator=(Fixed const &_new);

        // ex01
        Fixed(int const i_value);
        Fixed(float const f_value);
        float toFloat( void ) const;
        int toInt( void ) const;

        // ex02
        int operator<(Fixed const &right) const;
        int operator<=(Fixed const &right) const;
        int operator>(Fixed const &right) const;
        int operator>=(Fixed const &right) const;
        int operator==(Fixed const &right) const;
        int operator!=(Fixed const &right) const;

        Fixed operator+(Fixed const &right) const;
        Fixed operator-(Fixed const &right) const;
        Fixed operator*(Fixed const &right) const;
        Fixed operator/(Fixed const &right) const;

        Fixed & operator++(int addition);
};
std::ostream   & operator<<(std::ostream &o, Fixed const &fixed);

#endif
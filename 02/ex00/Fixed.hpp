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
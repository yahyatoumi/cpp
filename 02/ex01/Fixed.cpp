#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    return this->value;
}

void Fixed::setRawBits(int raw)
{
    this->value = raw;
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    this->value = src.getRawBits();
}
Fixed::~Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &_new)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->setRawBits(_new.getRawBits());
    return *this;
}

// ex01

Fixed::Fixed(int const i_value) : value(i_value << farctional_bits) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const f_value) : value(roundf(f_value * (1 << farctional_bits))){
    std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void) const{
    return  static_cast<float>(this->value) / (1 << this->farctional_bits);
}

int Fixed::toInt(void) const{
    return this->value >> this->farctional_bits;
}

int Fixed::getFractional(void) const{
    return this->farctional_bits;
}

std::ostream &operator<<(std::ostream &o, Fixed const &fixed){
    int integer;
    int fractional;
    int allZeros = 1;
    std::string frac = "";

    integer = fixed.getRawBits() >> fixed.getFractional();
    fractional = fixed.getRawBits() % (1 << fixed.getFractional());
    o << integer;
    for (int i = 0; i < fixed.getFractional(); ++i) {
        if (!fractional)
            break;
        fractional *= 10;
        frac += fractional / (1 << fixed.getFractional()) + 48;
        if (fractional / (1 << fixed.getFractional()))
            allZeros = 0;
        fractional %= 1 << fixed.getFractional();
    }
    if (allZeros)
        return o;
    o << ".";
    o << frac;
    return o;
}
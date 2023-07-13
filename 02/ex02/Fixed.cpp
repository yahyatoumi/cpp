#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : value(0)
{
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
    this->value = src.getRawBits();
}
Fixed::~Fixed(void)
{
}

Fixed &Fixed::operator=(Fixed const &_new)
{
    this->setRawBits(_new.getRawBits());
    return *this;
}

// ex01

Fixed::Fixed(int const i_value) : value(i_value << farctional_bits)
{
}

Fixed::Fixed(float const f_value) : value(roundf(f_value * (1 << farctional_bits)))
{
}

float Fixed::toFloat(void) const
{
    return static_cast<float>(this->value) / (1 << this->farctional_bits);
}

int Fixed::toInt(void) const
{
    return this->value >> this->farctional_bits;
}

int Fixed::getFractional(void) const{
    return this->farctional_bits;
}

std::ostream &operator<<(std::ostream &o, Fixed const &fixed)
{
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

// ex02

int Fixed::operator<(Fixed const &right) const
{
    return this->value < right.value;
}
int Fixed::operator<=(Fixed const &right) const
{
    return this->value <= right.value;
}
int Fixed::operator>(Fixed const &right) const
{
    return this->value > right.value;
}
int Fixed::operator>=(Fixed const &right) const
{
    return this->value >= right.value;
}
int Fixed::operator==(Fixed const &right) const
{
    return this->value == right.value;
}
int Fixed::operator!=(Fixed const &right) const
{
    return this->value != right.value;
}

Fixed Fixed::operator+(Fixed const &right) const
{
    return Fixed(right.value + this->value);
}
Fixed Fixed::operator-(Fixed const &right) const
{
    return Fixed(right.value - this->value);

}
Fixed Fixed::operator*(Fixed const &right) const
{
    return Fixed(right.toFloat() * this->toFloat());
}
Fixed Fixed::operator/(Fixed const &right) const
{
    return Fixed(right.value / this->value);
}

Fixed &Fixed::operator++(int)
{
    this->value += 1;
    return *this;
}

Fixed Fixed::operator++()
{
    Fixed _old(*this);
    this->value += 1;
    return (_old);
}

Fixed &Fixed::operator--(int)
{
    this->value -= 1;
    return *this;
}

Fixed Fixed::operator--()
{
    Fixed _old(*this);
    this->value--;
    return (_old);
}

Fixed &Fixed::min(Fixed &a, Fixed &b){
    if (a.getRawBits() < a.getRawBits())
        return a;
    return b;
}
Fixed &Fixed::max(Fixed &a, Fixed &b){
    if (a.getRawBits() > a.getRawBits())
        return a;
    return b;
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b){
    if (a.getRawBits() < a.getRawBits())
        return a;
    return b;
}
const Fixed &Fixed::max(Fixed const &a, Fixed const &b){
    if (a.getRawBits() > a.getRawBits())
        return a;
    return b;
}
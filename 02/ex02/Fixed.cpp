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

Fixed::Fixed(int const i_value) : value(i_value << farctional_bits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const f_value) : value(roundf(f_value * (1 << farctional_bits)))
{
    std::cout << "Float constructor called       nnnnnn " << this->value << std::endl;
}

float Fixed::toFloat(void) const
{
    return static_cast<float>(this->value) / (1 << this->farctional_bits);
}

int Fixed::toInt(void) const
{
    return this->value >> this->farctional_bits;
}

std::ostream &operator<<(std::ostream &o, Fixed const &fixed)
{
    o << static_cast<float>(fixed.getRawBits());
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
    Fixed ret(right);
    ret.value = right.value + this->value;
    return (ret);
}
Fixed Fixed::operator-(Fixed const &right) const
{
    Fixed ret(right);
    ret.value = right.value - this->value;
    return (ret);
}
Fixed Fixed::operator*(Fixed const &right) const
{
    Fixed ret(right);
    ret.value = right.value * this->value;
    return (ret);
}
Fixed Fixed::operator/(Fixed const &right) const
{
    Fixed ret(right);
    ret.value = right.value / this->value;
    return (ret);
}

Fixed &Fixed::operator++(int addition){
    this->value += addition;
    return *this;
}
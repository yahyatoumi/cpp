#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    printf("value == %i\n", this->value);
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

std::ostream &operator<<(std::ostream &o, Fixed const &fixed){
    o << static_cast<float>(fixed.getRawBits());
    printf("float == %f\n", static_cast<float>(fixed.getRawBits()));
    return o;
}
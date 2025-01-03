/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 13:31:29 by ytoumi            #+#    #+#             */
/*   Updated: 2023/07/14 13:31:30 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : value(0){
    std::cout << "Default constructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

void Fixed::setRawBits(int raw){
    this->value = raw;
}

Fixed::Fixed(Fixed const &src){
    std::cout << "Copy constructor called" << std::endl;
    this->value = src.getRawBits();
}
Fixed::~Fixed(void){
    std::cout << "Default constructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &_new) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->setRawBits(_new.getRawBits());
    return *this;
}
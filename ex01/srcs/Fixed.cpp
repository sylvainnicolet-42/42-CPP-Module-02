/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 13:46:30 by synicole          #+#    #+#             */
/*   Updated: 2023/06/28 13:46:31 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed() : _fixedPointValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = n << Fixed::_fractionalBits;
}

Fixed::Fixed(const float f) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = roundf(f * (1 << Fixed::_fractionalBits));
}

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed &f) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPointValue = f.getRawBits();
	return *this;
}

int	Fixed::getRawBits() const {
	return this->_fixedPointValue;
}

void Fixed::setRawBits(const int raw) {
	this->_fixedPointValue = raw;
}

float	Fixed::toFloat() const {
	return (float)this->_fixedPointValue / (1 << Fixed::_fractionalBits);
}

int Fixed::toInt() const {
	return this->_fixedPointValue >> Fixed::_fractionalBits;
}

std::ostream&	operator<<(std::ostream &o, const Fixed &f) {
	o << f.toFloat();
	return o;
}

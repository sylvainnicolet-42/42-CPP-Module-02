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

/**
 * Default constructor
 */
Fixed::Fixed() : _fixedPointValue(0) {
//	std::cout << "Default constructor called" << std::endl;
}

/**
 * Constructor with int value as parameter
 * Convert int value to fixed point value
 *
 * @param value
 */
Fixed::Fixed(const int value) {
//	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = value << Fixed::_fractionalBits;
}

/**
 * Constructor with float value as parameter
 * Convert float value to fixed point value with rounding to nearest integer
 *
 * @param value
 */
Fixed::Fixed(const float value) {
//	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = roundf(value * (1 << Fixed::_fractionalBits));
}

/**
 * Copy constructor
 *
 * @param src
 */
Fixed::Fixed(Fixed const &src) {
//	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

/**
 * Destructor
 */
Fixed::~Fixed() {
//	std::cout << "Destructor called" << std::endl;
}

/**
 * Assignment operator overload
 *
 * @param f
 * @return Fixed&
 */
Fixed&	Fixed::operator=(const Fixed &rhs) {
//	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPointValue = rhs.getRawBits();
	return *this;
}

Fixed	Fixed::operator+(const Fixed &rhs) const {
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(const Fixed &rhs) const {
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(const Fixed &rhs) const {
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(const Fixed &rhs) const {
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed&	Fixed::operator++() {
	this->_fixedPointValue++;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed tmp(*this);
	this->_fixedPointValue++;
	return tmp;
}

Fixed&	Fixed::operator--() {
	this->_fixedPointValue--;
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed tmp(*this);
	this->_fixedPointValue--;
	return tmp;
}

bool	Fixed::operator>(const Fixed &rhs) const {
	return this->toFloat() > rhs.toFloat();
}

bool	Fixed::operator<(const Fixed &rhs) const {
	return this->toFloat() < rhs.toFloat();
}

bool	Fixed::operator>=(const Fixed &rhs) const {
	return this->toFloat() >= rhs.toFloat();
}

bool	Fixed::operator<=(const Fixed &rhs) const {
	return this->toFloat() <= rhs.toFloat();
}

bool	Fixed::operator==(const Fixed &rhs) const {
	return this->toFloat() == rhs.toFloat();
}

bool	Fixed::operator!=(const Fixed &rhs) const {
	return this->toFloat() != rhs.toFloat();
}

/**
 * Returns the fixed point value
 *
 * @return int _fixedPointValue
 */
int	Fixed::getRawBits() const {
	return this->_fixedPointValue;
}

/**
 * Sets the fixed point value
 *
 * @param raw
 * @return void
 */
void Fixed::setRawBits(const int raw) {
	this->_fixedPointValue = raw;
}

/**
 * Convert fixed point value to float
 *
 * @return float
 */
float Fixed::toFloat() const {
	return (float)this->_fixedPointValue / (1 << Fixed::_fractionalBits);
}

/**
 * Convert fixed point value to int
 *
 * @return int
 */
int Fixed::toInt() const {
	return this->_fixedPointValue >> Fixed::_fractionalBits;
}

Fixed&	Fixed::min(Fixed &a, Fixed &b) {
	return (a < b) ? a : b;
}

const Fixed&	Fixed::min(const Fixed &a, const Fixed &b) {
	return (a < b) ? a : b;
}

Fixed&	Fixed::max(Fixed &a, Fixed &b) {
	return (a > b) ? a : b;
}

const Fixed&	Fixed::max(const Fixed &a, const Fixed &b) {
	return (a > b) ? a : b;
}

/**
 * Output operator overload
 *
 * @param o
 * @param rhs
 * @return std::ostream&
 */
std::ostream&	operator<<(std::ostream &o, const Fixed &rhs) {
	o << rhs.toFloat();
	return o;
}

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
	std::cout << "Default constructor called" << std::endl;
}

/**
 * TODO
 *
 * @param value
 */
Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = value << Fixed::_fractionalBits;
}

/**
 * roundf() arrondit la valeur passée en paramètre à la valeur entière
 * la plus proche.
 *
 * value * (1 << Fixed::_fractionalBits):
 * Cela multiplie la valeur d'origine (value) par une puissance de deux,
 * où l'exposant est donné par Fixed::_fractionalBits.
 * Cela permet de décaler les bits fractionnels vers la partie entière.
 * Par exemple, si _fractionalBits vaut 8, cela revient à multiplier
 * value par 256 (2^8).
 * L'objectif est de conserver une précision fractionnaire avec un
 * nombre spécifié de bits.
 *
 * @param value
 */
Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = (int)roundf(value * (1 << Fixed::_fractionalBits));
}

/**
 * Copy constructor
 *
 * @param src
 */
Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

/**
 * Destructor
 */
Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

/**
 * Assignment operator overload
 *
 * @param f
 * @return Fixed&
 */
Fixed&	Fixed::operator=(const Fixed &rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPointValue = rhs.getRawBits();
	return *this;
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
 * TODO
 *
 * @return float
 */
float Fixed::toFloat() const {
	return (float)this->_fixedPointValue / (1 << Fixed::_fractionalBits);
}

/**
 * Opération de décalage de bits vers la droite (>>) sur la variable
 * membre _fixedPointValue de l'objet Fixed.
 *
 * Le décalage de bits vers la droite de 8 positions (>> 8) divise la
 * valeur _fixedPointValue par une puissance de 2, en supprimant les 8 bits
 * de poids faible (partie fractionnaire) et en gardant les 24 bits de
 * poids fort (partie entière).
 * Cela revient à convertir la valeur fixe en un entier en ignorant la
 * partie fractionnaire.
 *
 * Le résultat de cette opération est ensuite renvoyé comme résultat de
 * la méthode toInt().
 *
 * En résumé, la méthode toInt() retourne la valeur fixe de l'objet Fixed
 * convertie en un entier en ignorant les 8 bits
 * de poids faible (partie fractionnaire).
 *
 * @return int
 */
int Fixed::toInt() const {
	return this->_fixedPointValue >> Fixed::_fractionalBits;
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

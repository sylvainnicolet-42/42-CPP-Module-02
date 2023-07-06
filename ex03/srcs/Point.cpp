/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:38:42 by synicole          #+#    #+#             */
/*   Updated: 2023/07/06 14:38:43 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.class.hpp"

Point::Point() : _x(0), _y(0) { }

Point::Point(float const x, float const y) : _x(x), _y(y) { }

Point::Point(const Point &src) {
	*this = src;
}

Point&	Point::operator=(const Point &rhs) {
	(void)rhs;
	// Can't assign to const member
	return *this;
}

Point::~Point() { }

Fixed	Point::getX() const {
	return this->_x;
}

Fixed	Point::getY() const {
	return this->_y;
}

std::ostream&	operator<<(std::ostream &o, const Point &rhs) {
	o << "Point(" << rhs.getX() << ", " << rhs.getY() << ")";
	return o;
}

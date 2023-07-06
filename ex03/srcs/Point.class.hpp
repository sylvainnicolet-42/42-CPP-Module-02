/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:38:48 by synicole          #+#    #+#             */
/*   Updated: 2023/07/06 14:38:50 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_CLASS_HPP
# define POINT_CLASS_HPP

#include "Fixed.class.hpp"

class Point {
	public:
		Point();								// Constructor
		Point(float const x, float const y);
		Point(const Point &src);				// Copy constructor
		~Point();								// Destructor

		Point&	operator=(const Point &rhs);	// Assignation operator

		Fixed	getX() const;
		Fixed	getY() const;

	private:
		Fixed const	_x;
		Fixed const	_y;
};

std::ostream&	operator<<(std::ostream &o, const Point &rhs);

bool	bsp(Point const &a, Point const &b, Point const &c, Point const &point);
Fixed	calculateArea(Point const &a, Point const &b, Point const &c);

#endif


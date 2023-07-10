/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:38:57 by synicole          #+#    #+#             */
/*   Updated: 2023/07/06 14:38:59 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.class.hpp"

// Example: https://www.geeksforgeeks.org/check-whether-a-given-point-lies-inside-a-triangle-or-not/
bool	bsp(Point const &a, Point const &b, Point const &c, Point const &point) {

	// Calculate the area of the triangle ABC
	const Fixed	areaABC = calculateArea(a, b, c);
	std::cout << "Area of ABC: " << areaABC << std::endl;

	// Calculate the area of the triangle ABP
	const Fixed	areaABP = calculateArea(a, b, point);
	std::cout << "Area of ABP: " << areaABP << std::endl;
	// Calculate the area of the triangle ACP
	const Fixed	areaACP = calculateArea(a, c, point);
	std::cout << "Area of ACP: " << areaACP << std::endl;
	// Calculate the area of the triangle BCP
	const Fixed	areaBCP = calculateArea(b, c, point);
	std::cout << "Area of BCP: " << areaBCP << std::endl;

	// If the sum of the areas of the three triangles is equal to the area of the triangle ABC, then the point is inside the triangle
	return (areaABC == areaABP + areaACP + areaBCP);
}

Fixed calculateArea(Point const &a, Point const &b, Point const &c)
{
	// Calculate the area of the triangle ABC using the Heron's formula
	Fixed area = (a.getX().toFloat()*(b.getY().toFloat()-c.getY().toFloat()) + b.getX().toFloat()*(c.getY().toFloat()-a.getY().toFloat())+ c.getX().toFloat()*(a.getY().toFloat()-b.getY().toFloat()))/2.0f;
	if (area < 0)
		area = Fixed(-1) * area;
	return (area);
}

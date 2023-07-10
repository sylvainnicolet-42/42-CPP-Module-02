/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 13:45:30 by synicole          #+#    #+#             */
/*   Updated: 2023/06/28 13:45:32 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.class.hpp"

int	main( void ) {
	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	// ----- MY TESTS -----

	Fixed	c(42.42f);
	Fixed	d(40.2f);
	const Fixed	e(42.42f);
	const Fixed	f(40.2f);

	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;

	std::cout << "min = " << Fixed::min(c, d) << std::endl;
	std::cout << "max = " << Fixed::max(c, d) << std::endl;
	std::cout << "min = " << Fixed::min(e, f) << std::endl;
	std::cout << "max = " << Fixed::max(e, f) << std::endl;

	std::cout << "c / d = " << c / d << std::endl;

	return (0);
}

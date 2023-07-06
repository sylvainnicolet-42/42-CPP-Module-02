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

#include "Point.class.hpp"

int	main( void ) {
	Point	a(0, 0);
	Point	b(20, 0);
	Point	c(0, 20);
	Point	p(0, 0);

	std::cout << "--- TRIANGLE ---" << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;

	std::cout << "\n--- POINT ---" << std::endl;
	std::cout << "p: " << p << std::endl;

	std::cout << "\n--- IS POINT IN TRIANGLE ABC? 🔍 ---" << std::endl;
	if (bsp(a, b, c, p))
		std::cout << p << " is in abc! ✅ " << std::endl;
	else
		std::cout << p << " is NOT in abc! ❌ " << std::endl;
	return (0);
}

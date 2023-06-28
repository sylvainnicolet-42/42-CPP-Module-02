/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: synicole <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 13:46:20 by synicole          #+#    #+#             */
/*   Updated: 2023/06/28 13:46:21 by synicole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

class Fixed {

	public:
		// Constructor that initializes the fixed point value to 0
		Fixed();

		// Copy constructor
		Fixed(const Fixed &src);

		// Destructor
		~Fixed();

		// Assignment operator overload
		Fixed&	operator=(const Fixed &f);

		// Returns the fixed point value
		int		getRawBits() const;

		// Sets the fixed point value
		void	setRawBits(int const raw);

	private:
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;
};

#endif

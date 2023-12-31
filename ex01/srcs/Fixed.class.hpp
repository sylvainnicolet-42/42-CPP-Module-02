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
# include <cmath>

class Fixed {
	public:
		Fixed();								// Constructor
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &src);				// Copy constructor
		~Fixed();								// Destructor

		Fixed&	operator=(const Fixed &rhs);	// Assignation operator

		int		getRawBits() const;
		void	setRawBits(int const raw);
		float 	toFloat(void) const;
		int		toInt(void) const;
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;
};

std::ostream&	operator<<(std::ostream &o, const Fixed &rhs);

#endif

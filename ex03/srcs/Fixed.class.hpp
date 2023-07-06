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

		Fixed	operator+(const Fixed &rhs) const;
		Fixed	operator-(const Fixed &rhs) const;
		Fixed	operator*(const Fixed &rhs) const;
		Fixed	operator/(const Fixed &rhs) const;

		Fixed&	operator++(void);
		Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);

		bool	operator>(const Fixed &rhs) const;
		bool	operator<(const Fixed &rhs) const;
		bool	operator>=(const Fixed &rhs) const;
		bool	operator<=(const Fixed &rhs) const;
		bool	operator==(const Fixed &rhs) const;
		bool	operator!=(const Fixed &rhs) const;

		int		getRawBits() const;
		void	setRawBits(int const raw);
		float 	toFloat(void) const;
		int		toInt(void) const;

		static Fixed&	min(Fixed &a, Fixed &b);
		static Fixed&	min(const Fixed &a, const Fixed &b);
		static Fixed&	max(Fixed &a, Fixed &b);
		static Fixed&	max(const Fixed &a, const Fixed &b);
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;
};

std::ostream&	operator<<(std::ostream &o, const Fixed &rhs);

#endif

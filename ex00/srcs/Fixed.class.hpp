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
		Fixed();								// Constructor
		Fixed(const Fixed &src);				// Copy constructor
		~Fixed();								// Destructor

		Fixed&	operator=(const Fixed &rhs);	// Assignation operator

		int		getRawBits() const;
		void	setRawBits(int const raw);
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:58:13 by tanota            #+#    #+#             */
/*   Updated: 2024/02/28 16:43:38 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int _fixedPointValue;
		static const int _fractionalBits = 8;

	public:
		Fixed();								// default constructor
		Fixed(const Fixed& other);				// copy constructor
		Fixed(const int intValue);				// int constructor
		Fixed(const float floatValue);			// float constructor
		Fixed& operator=(const Fixed& other);	// copy assignment operator
		~Fixed();								// destructor

		float toFloat(void) const;
		int toInt(void) const;

		int getRawBits(void) const;
		void setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixedPointNumber);

#endif

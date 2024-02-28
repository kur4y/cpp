/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:58:13 by tanota            #+#    #+#             */
/*   Updated: 2024/02/28 16:44:09 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int _fixedPointValue;
		static const int _fractionalBits = 8;

	public:
		Fixed();								// default constructor
		Fixed(const Fixed& other);				// copy constructor
        Fixed& operator=(const Fixed& other);	// copy assignment operator
		~Fixed();								// destructor

		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif

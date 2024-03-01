/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:58:15 by tanota            #+#    #+#             */
/*   Updated: 2024/03/01 16:58:06 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	{
		Fixed a;
		Fixed const b(Fixed(5.05f) * Fixed(2));

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
	
		std::cout << b << std::endl;

		std::cout << Fixed::max(a, b) << std::endl;
	}
	std::cout << "-----------------------------" << std::endl;
	{
		Fixed a(1);
		Fixed b(2.5f);
		Fixed c;

		if (a > b)
			std::cout << "a superieur" << std::endl;
		else
			std::cout << "b superieur" << std::endl;

		Fixed d = a + b;
		std::cout << "Valeur de d: " << d << std::endl;
		
		c = Fixed(a);
		std::cout << "Valeur de c: " << c << std::endl;

		std::cout << "a - c = " << a - c << std::endl;
		std::cout << "c + b = " << c + b << std::endl;
	}
}
	
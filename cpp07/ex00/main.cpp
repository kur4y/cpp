/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 14:38:37 by tanota            #+#    #+#             */
/*   Updated: 2024/04/06 14:57:41 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
	int a = 2;
	int b = 3;

	std::cout << "before swap: a = " << a << ", b = " << b << std::endl;
	::swap(a, b);
	std::cout << "after swap: a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a ,b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	std::cout << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << "before swap: " << c << ", d = " << d << std::endl;
	::swap(a, b);
	std::cout << "after swap: " << c << ", d = " << d << std::endl;
	std::cout << "min(c ,d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;

	return (0);
}

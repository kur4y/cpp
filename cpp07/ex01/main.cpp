/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:02:02 by tanota            #+#    #+#             */
/*   Updated: 2024/04/06 15:06:42 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int arrInt[] = {1, 2, 3, 4, 5};
	::iter(arrInt, sizeof(arrInt)/sizeof(arrInt[0]), print);

	std::cout << std::endl;

	std::string arrStr[] = {"Hello", "World", "Test", "Array"};
	::iter(arrStr, sizeof(arrStr)/sizeof(arrStr[0]), print);

	return (0);
}

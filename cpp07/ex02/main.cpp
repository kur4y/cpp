/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:27:44 by tanota            #+#    #+#             */
/*   Updated: 2024/04/06 15:35:28 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	try
	{
		// try default constructor
		Array<int> null;
		if (null.getArray() == NULL)
			std::cout << "default constructor array_ = NULL" << ' ';
		std::cout << '\n';

		// try unsigned n constructor
		Array<int> arr(10);
		for (unsigned int i = 0; i < arr.size(); ++i)
		{
			arr[i] = i;
			std::cout << arr[i] << ' ';
		}
		std::cout << "\n";

		// try copy constructor
		Array<int> arr2(arr);
		for (unsigned int i = 0; i < arr2.size(); ++i)
			std::cout << arr2[i] << ' ';
		std::cout << '\n';

		// try =operator
		Array<int> arr3 = arr;
		for (unsigned int i = 0; i < arr3.size(); ++i)
			std::cout << arr3[i] << ' ';
		std::cout << "\n";

		// trigger out of range exception
		std::cout << arr[11] << '\n';
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return(0);
}

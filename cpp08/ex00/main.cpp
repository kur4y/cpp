/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:18:11 by tanota            #+#    #+#             */
/*   Updated: 2024/05/08 16:22:12 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	std::vector<int> vec;
	for (int i = 0; i < 5; i++)
		vec.push_back(i);
	easyfind(vec, -1);
	easyfind(vec, 0);
	easyfind(vec, 1);
	easyfind(vec, 2);
	easyfind(vec, 3);
	easyfind(vec, 4);
	easyfind(vec, 5);
	easyfind(vec, 6);
	easyfind(vec, 7);
}

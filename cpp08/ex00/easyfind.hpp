/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:18:16 by tanota            #+#    #+#             */
/*   Updated: 2024/05/08 16:20:20 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <vector>

template <typename T>
void easyfind(T &container, int toFind)
{
	try
	{
		typename T::iterator it = std::find(container.begin(), container.end(), toFind);
		if (it == container.end())
			throw std::exception();
		else
			std::cout << "Value " << toFind << " found." << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << "Value " << toFind << " not found." << std::endl;
	}
}

#endif

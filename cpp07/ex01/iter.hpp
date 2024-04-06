/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:00:05 by tanota            #+#    #+#             */
/*   Updated: 2024/04/06 15:03:41 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T *arr, size_t length, void (*f)(const T &))
{
	for (size_t i = 0; i < length; i++)
		f(arr[i]);
}

template <typename T>
void print(const T &t)
{
	std::cout << t << std::endl;
}

#endif

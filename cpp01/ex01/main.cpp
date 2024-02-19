/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 22:55:51 by tanota            #+#    #+#             */
/*   Updated: 2024/02/19 18:42:11 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 5;
	Zombie* zHorde = zombieHorde(N, "foo");
	
	for (int i = 0; i < N; i++)
		zHorde[i].announce();
	
	delete[] zHorde;
	return (0);
}

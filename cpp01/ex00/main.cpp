/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 22:55:51 by tanota            #+#    #+#             */
/*   Updated: 2024/02/12 17:15:28 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* foo = newZombie("foo");
	foo->announce();

	Zombie faa("faa");
	faa.announce();
	
	randomChump("fee");
	delete foo;
	
	return (0);
}

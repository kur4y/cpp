/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:02:15 by tanota            #+#    #+#             */
/*   Updated: 2024/03/04 13:52:47 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap cp("John");
	cp.attack("Nhoj");
	cp.takeDamage(5);
	cp.beRepaired(3);

	std::cout << std::endl;

	ClapTrap cp2 = cp;
	cp2.attack("David");
	cp2.takeDamage(5);
	cp2.beRepaired(3);

	std::cout << std::endl;

	ClapTrap cp3;
	cp3.attack("Tom");
	cp3.takeDamage(5);
	cp3.beRepaired(3);

	return (0);
}

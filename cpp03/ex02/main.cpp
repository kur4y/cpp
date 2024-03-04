/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:02:15 by tanota            #+#    #+#             */
/*   Updated: 2024/03/04 14:24:08 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	{
		ClapTrap cp("John");
		cp.attack("Aaron");
		cp.takeDamage(5);
		cp.beRepaired(3);

		std::cout << std::endl;
		
		ClapTrap cp2;
		cp2 = cp;
		cp2.attack("David");
		cp2.takeDamage(5);
		cp2.beRepaired(3);

		std::cout << std::endl;

		ClapTrap cp3(cp);
		cp3.attack("Gabriel");
		cp3.takeDamage(5);
		cp3.beRepaired(3);
	}
	std::cout << "-----------------------------" << std::endl;
	{
		ScavTrap sv("Isaac");
		sv.attack("Luke");
		sv.takeDamage(30);
		sv.beRepaired(15);
		sv.guardGate();

		std::cout << std::endl;
		
		ScavTrap sv2(sv);
		sv.attack("Daniel");
		sv.takeDamage(30);
		sv.beRepaired(15);
		sv.guardGate();

		std::cout << std::endl;
		
		ScavTrap sv3 = sv;
		sv.attack("Jacob");
		sv.takeDamage(30);
		sv.beRepaired(15);
		sv.guardGate();
	}
		std::cout << "-----------------------------" << std::endl;
	{
		FragTrap fg("Ezekiel");
		fg.highFiveGuys();
		
		std::cout << std::endl;

		FragTrap fg2("Gideon");
		fg2.highFiveGuys();

		std::cout << std::endl;

		FragTrap fg3;
		fg3 = fg;
		fg3.attack("Gideon");
	}
	return (0);
}

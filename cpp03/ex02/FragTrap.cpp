/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:03:36 by tanota            #+#    #+#             */
/*   Updated: 2024/03/04 14:16:35 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " has been destroyed." << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	
	std::cout << "FragTrap " << _name << " has been created." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap " << _name << " has been copy-created." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	ClapTrap::operator=(other);
	std::cout << "FragTrap " << _name << " has been assigned." << std::endl;
	return *this;
}

void FragTrap::attack(const std::string& target)
{
	if (_energyPoints == 0)
	{
		std::cout << "FragTrap " << _name << " is out of energy. Can't attack." << std::endl;
		return ;
	}
		else if (_hitPoints == 0)
	{
		std::cout << "FragTrap " << _name << " has no hit points left. Can't attack." << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl; 
}

void FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << _name << " requests a positive high fives!" << std::endl;
}

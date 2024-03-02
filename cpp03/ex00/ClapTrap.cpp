/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:02:10 by tanota            #+#    #+#             */
/*   Updated: 2024/03/02 15:40:22 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
				: _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " has been destroyed." << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
				: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << name << " has been created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
				: _name(other._name), _hitPoints(other._hitPoints), _energyPoints(other._energyPoints), _attackDamage(other._attackDamage)
{
	std::cout << "ClapTrap " << _name << " has been copy-constructed." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	std::cout << "ClapTrap " << _name << " has been assigned." << std::endl;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (_energyPoints == 0)
		std::cout << "ClapTrap " << _name << " has not enough energy points. Can't attack." << std::endl;
	else if (_hitPoints == 0)
		std::cout << "ClapTrap " << _name << " has not enough hit points. Can't attack." << std::endl;
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl; 
}

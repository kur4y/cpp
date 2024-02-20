/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:18:02 by tanota            #+#    #+#             */
/*   Updated: 2024/02/20 17:55:55 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : _name(name), _weapon(NULL)
{
	
}

HumanB::~HumanB()
{
	return ;
}

void HumanB::setWeapon(Weapon& newWeapon)
{
	_weapon = &newWeapon;
}

void HumanB::attack() const
{
	if (_weapon)
		std::cout << _name << " attacks with " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " has no weapon." << std::endl;
}

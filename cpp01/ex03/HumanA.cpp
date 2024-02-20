/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:18:00 by tanota            #+#    #+#             */
/*   Updated: 2024/02/20 17:55:51 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) : _name(name), _weapon(weapon)
{
	
}

HumanA::~HumanA()
{
	return ;
}

void HumanA::attack() const
{
	std::cout << _name << " attacks with " << _weapon.getType() << std::endl;
}

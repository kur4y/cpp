/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:18:04 by tanota            #+#    #+#             */
/*   Updated: 2024/02/20 17:55:34 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : _type(type)
{
	
}

Weapon::~Weapon()
{
	return ;
}

const std::string& Weapon::getType(void)
{
	return this->_type;
}

void Weapon::setType(const std::string& newType)
{
	_type = newType;
}

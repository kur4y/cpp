/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:17:07 by tanota            #+#    #+#             */
/*   Updated: 2024/02/20 17:47:24 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon* _weapon;
	
	public:
		HumanB(const std::string& name);
		~HumanB();

		void setWeapon(Weapon& newWeapon);
		void attack() const;
};

#endif

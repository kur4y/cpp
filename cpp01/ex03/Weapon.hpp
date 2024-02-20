/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:15:37 by tanota            #+#    #+#             */
/*   Updated: 2024/02/20 17:51:56 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon
{
	private:
		std::string _type;

	public:
		Weapon(const std::string& type);
		~Weapon();
		
		const std::string& getType(void);
		void setType(const std::string& newType);
};

#endif

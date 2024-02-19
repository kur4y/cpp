/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 22:56:18 by tanota            #+#    #+#             */
/*   Updated: 2024/02/19 18:25:30 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	private:
		std::string _name;
	
	public:
		Zombie();
		~Zombie();
		
		void setName(std::string name);
		void announce(void);
};

Zombie* zombieHorde(int N, std::string name);

# endif

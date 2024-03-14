/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:09:48 by tanota            #+#    #+#             */
/*   Updated: 2024/03/14 16:19:11 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <string>
# include <stdint.h>
# include <iostream>

struct Data
{
	std::string name;
	int number;
};

class Serializer
{
	public:
		Serializer();
		Serializer(const Serializer &);
		Serializer &operator=(const Serializer&);
		~Serializer();

		static uintptr_t serialize(Data *ptr);
		static Data *deserialize(uintptr_t raw);
};

#endif

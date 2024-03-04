/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:08:50 by tanota            #+#    #+#             */
/*   Updated: 2024/03/04 15:24:47 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type(type)
{
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type)
{
	std::cout << "Animal copy constructor called." << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
		type = other.type;
	std::cout << "Animal assigned." << std::endl;
	return *this;
}

std::string Animal::getType() const
{
	return type;
}

void Animal::makeSound() const
{
	std::cout << "Animal makes a sound." << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:11:52 by tanota            #+#    #+#             */
/*   Updated: 2024/03/05 13:09:59 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat constructor called." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	Animal::operator=(other);
	std::cout << "Cat assigned." << std::endl;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Cat meows: Meow! Meow!" << std::endl;
}

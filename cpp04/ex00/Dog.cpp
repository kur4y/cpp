/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:12:05 by tanota            #+#    #+#             */
/*   Updated: 2024/03/05 12:33:57 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog constructor called." << std::endl;
}

Dog::~Dog()
{
	std::cout <<"Dog destructor called." << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	Animal::operator=(other);
	std::cout << "Dog assigned." << std::endl;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Dog barks: Woof! Woof!" << std::endl;
}

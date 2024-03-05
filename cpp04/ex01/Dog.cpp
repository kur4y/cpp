/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:12:05 by tanota            #+#    #+#             */
/*   Updated: 2024/03/05 13:31:32 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog constructor called." << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout <<"Dog destructor called." << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	brain = new Brain(*other.brain);
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		if (brain)
			delete brain;
		brain = new Brain(*other.brain);
	}
	std::cout << "Dog assigned." << std::endl;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Dog barks: Woof! Woof!" << std::endl;
}

Brain* Dog::getBrain() const
{
	return brain;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:23:30 by tanota            #+#    #+#             */
/*   Updated: 2024/03/05 13:08:07 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << meta->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		delete meta;
		delete j;
		delete i;
	}
	std::cout << "-----------------------------" << std::endl;
	{
		const WrongAnimal* wrongMeta = new WrongAnimal();
		const WrongAnimal* wrongI = new WrongCat();
		
		std::cout << wrongMeta->getType() << " " << std::endl;
		std::cout << wrongI->getType() << " " << std::endl;
		wrongMeta->makeSound();
		wrongI->makeSound();

		delete wrongMeta;
		delete wrongI;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:23:30 by tanota            #+#    #+#             */
/*   Updated: 2024/03/05 13:56:40 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		
		delete j;
		delete i;
	}
	std::cout << "-----------------------------" << std::endl;
	{
		Dog* dog = new Dog();
		Cat* cat = new Cat();
		
		dog->getBrain()->setIdea(0, "I'm a dog");
		std::cout << "Dog brain 1st idea: " << dog->getBrain()->getIdea(0) << std::endl;
		std::cout << "Dog brain 2nd idea: " << dog->getBrain()->getIdea(1) << std::endl;

		cat->getBrain()->setIdea(0, "I'm a cat");
		std::cout << "Cat brain 1st idea: " << cat->getBrain()->getIdea(0) << std::endl;
		std::cout << "Cat brain 2nd idea: " << cat->getBrain()->getIdea(1) << std::endl;
		
		delete dog;
		delete cat;
	}
	return (0);
}

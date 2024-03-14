/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:26:51 by tanota            #+#    #+#             */
/*   Updated: 2024/03/14 16:36:15 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base()
{

}

Base::~Base()
{

}

Base *generate(void)
{
	Base *p;
	srand(time(NULL));
	int i = rand() % 3;

	switch (i)
	{
		case 0:
			p = new A();
			break;
		case 1:
			p = new B();
			break;
		case 2:
			p = new C();
			break;
	}
	return (p);
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "*** Base A ***" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "*** Base B ***" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "*** Base C ***" << std::endl;
}

void identify(Base& p)
{
	A a;
	B b;
	C c;

	try
	{
		a = dynamic_cast<A&>(p);
		std::cout << "&&& Base A &&&" << std::endl;
	}
	catch (std::exception &e)
	{
		try
		{
			b = dynamic_cast<B&>(p);
			std::cout << "&&& Base B &&&" << std::endl;
		}
		catch (std::exception &e)
		{
			try
			{
				c = dynamic_cast<C&>(p);
				std::cout << "&&& Base C &&&" << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << "Error : " << e.what() << std::endl;
			}
		}
	}
}

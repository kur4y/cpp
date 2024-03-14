/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:25:58 by tanota            #+#    #+#             */
/*   Updated: 2024/03/14 16:36:51 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>
# include <stdint.h>
# include <stdexcept>
# include <cstdlib> 

class Base
{
	public:
		Base();
		virtual ~Base();
};

class A : public Base
{

};

class B : public Base
{

};

class C : public Base
{

};

Base	*generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif

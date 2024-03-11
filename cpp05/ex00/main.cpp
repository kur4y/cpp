/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 18:30:16 by tanota            #+#    #+#             */
/*   Updated: 2024/03/11 15:42:21 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		//Bureaucrat dwight("dwight", 151);	// grade too low
		//Bureaucrat angela("angela", 0);		// grade too high
		
		Bureaucrat jim("Jim", 150);
		std::cout << jim << std::endl;		// 150
		
		jim.incrementGrade();
		std::cout << jim << std::endl;		// 150 - 1 = 149
		
		jim.incrementGrade();
		std::cout << jim << std::endl;		// 149 - 1 = 148
		
		jim.decrementGrade();
		std::cout << jim << std::endl;		// 148 + 1 = 149
		
		Bureaucrat pam("Pam", 1);
		std::cout << pam << std::endl;		// 1
		
		pam.decrementGrade();
		std::cout << pam << std::endl;		// 1 + 1 = 2
		
		pam.incrementGrade();
		std::cout << pam << std::endl;		// 2 - 1 = 1

		pam.incrementGrade();
		std::cout << pam << std::endl;		// 1 - 1 = 0 -> grade too high
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);	
}

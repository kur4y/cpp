/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 18:30:16 by tanota            #+#    #+#             */
/*   Updated: 2024/03/13 16:40:39 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try 
    {
		Bureaucrat jim("Jim", 1);
		Bureaucrat pam("Pam", 150);
		Bureaucrat dwight("Dwight", 72);

		ShrubberyCreationForm shrubForm("Shrub");		// sign 145 exec 137
		RobotomyRequestForm robotForm("Robot");			// sign 72 exec 45
		PresidentialPardonForm pardonForm("Criminal");	// sign 25 exec 5

		std::cout << jim << std::endl;
		std::cout << pam << std::endl;

		jim.executeForm(shrubForm);						// 1 < 137	good but not signed
		jim.signForm(shrubForm);						// 1 < 145	good
		jim.executeForm(shrubForm);						// 1 < 137	good

		pam.signForm(robotForm);						// 150 > 72	grade too low
		pam.executeForm(robotForm);						// 150 > 45	grade too low

		jim.signForm(pardonForm);						// 1 < 25	good
		jim.executeForm(pardonForm);					// 1 < 5	good

		dwight.signForm(robotForm);						// 72 = 72	good
		dwight.executeForm(robotForm);					// 72 > 45	grade too low

		jim.signForm(robotForm);						// 1 < 145	good
		jim.executeForm(robotForm);						// 1 < 137	good
	} 
	catch (std::exception &e) 
	{
		std::cerr << "Caught exception: " << e.what() << std::endl;
	}

	return (0);
}
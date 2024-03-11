/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 18:30:16 by tanota            #+#    #+#             */
/*   Updated: 2024/03/11 16:34:03 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		//Bureaucrat dwight("dwight", 151);	// grade too low
		//Bureaucrat angela("angela", 0);		// grade too high
		
		Bureaucrat jim("Jim", 150);
		std::cout << jim << std::endl;
		
		Form form1("Form1", 149, 149);
		std::cout << form1 << std::endl;

		jim.signForm(form1);
		std::cout << form1 << std::endl;
		
		// ---------------- //
		
		Bureaucrat pam("Pam", 1);
		std::cout << pam << std::endl;
		
		Form form2("Form2", 1, 1);
		std::cout << form2 << std::endl;

		pam.signForm(form2);
		std::cout << form2 << std::endl;

		pam.signForm(form1);
		std::cout << form1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);	
}

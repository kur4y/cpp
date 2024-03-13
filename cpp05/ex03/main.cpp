/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 18:30:16 by tanota            #+#    #+#             */
/*   Updated: 2024/03/13 16:58:47 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

int main()
{
    try 
    {
        Bureaucrat jim("Jim", 1);
        Intern pam;
        AForm *form;

        form = pam.makeForm("shrubbery creation", "Dwight");
        // form = pam.makeForm("roboDwighty request", "Dwight");
        // form = pam.makeForm("presidential pardon", "Dwight");
        // form = pam.makeForm("fdagadn", "Dwight");
        if (form)
        {
            jim.signForm(*form);
            jim.executeForm(*form);
        }
        delete form;

        form = pam.makeForm(" yes", "dwight"); // invalid
    } 
    catch (std::exception &e) 
    {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }
	
    return (0);
}
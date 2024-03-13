/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:18:14 by tanota            #+#    #+#             */
/*   Updated: 2024/03/13 16:26:19 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
						AForm("ShrubberyCreationForm", 145, 137), _target("default")
{
	std::cout << "ShrubberyCreationForm default constructor called." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
						AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm fill constructor called." << std::endl;	
}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) :
						AForm(other), _target(other._target)
{
	std::cout << "ShrubberyCreationForm copy constructor called." << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		this->_target = other._target;
	}
	std::cout << "ShrubberyCreationForm assigned." << std::endl;
	return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	AForm::execute(executor);

	std::ofstream ofs((this->getTarget() + "_shrubbery").c_str());
	if (!ofs)
		throw std::runtime_error("Failed to open the file for writing");
	else
	{
		ofs << "ASCII trees" << std::endl;
		ofs.close();
	}
}

const std::string &ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:21:02 by tanota            #+#    #+#             */
/*   Updated: 2024/03/13 16:27:28 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("default"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "AForm default constructor called." << std::endl;	
}

AForm::~AForm()
{
	std::cout << "AForm destructor called." << std::endl;
}

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute) :
		_name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
	std::cout << "AForm fill constructor called." << std::endl;
}

AForm::AForm(const AForm &other) :
		_name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
	std::cout << "AForm copy constructor called." << std::endl;
}

AForm &AForm::operator=(const AForm &other)
{
	if (this != &other)
		this->_isSigned = other._isSigned;
	std::cout << "AForm assigned." << std::endl;
	return (*this);	
}

const std::string &AForm::getName() const
{
	return (this->_name);
}

bool AForm::getIsSigned() const
{
	return (this->_isSigned);
}

int AForm::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int AForm::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException();
	else
		this->_isSigned = true;
}

void AForm::execute(const Bureaucrat &executor) const
{
	if (!this->_isSigned)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->_gradeToExecute)
		throw AForm::GradeTooLowException();
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("AForm grade too high.");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("AForm grade too low.");
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return ("AForm not signed.");
}

std::ostream &operator<<(std::ostream &out, const AForm &aform)
{
	out << aform.getName() << ", AForm grade to sign: " << aform.getGradeToSign() << ", grade to execute: " << aform.getGradeToExecute() << ", is signed: " << (aform.getIsSigned() ? "Yes." : "No.");
	return (out);
}

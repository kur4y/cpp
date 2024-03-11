/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:44:57 by tanota            #+#    #+#             */
/*   Updated: 2024/03/11 16:35:11 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() :
		_name("default"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "Form default constructor called." << std::endl;
}

Form::~Form()
{
	std::cout << "Form destructor called." << std::endl;
}

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute) :
		_name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
	std::cout << "Form fill constructor called." << std::endl;
}

Form::Form(const Form &other) :
		_name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
	std::cout << "Form copy constructor called." << std::endl;
}

Form &Form::operator=(const Form &other)
{
	if (this != &other)
		this->_isSigned = other._isSigned;
	std::cout << "Form assigned." << std::endl;
	return (*this);
}

const std::string &Form::getName() const
{
	return (this->_name);	
}

bool Form::getIsSigned() const
{
	return (this->_isSigned);
}

int Form::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int Form::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	else
		this->_isSigned = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Form grade is too high.";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Form grade is too low.";
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
	out << form.getName() << ", form grade to sign " << form.getGradeToSign() << ", grade to execute " << form.getGradeToExecute() << ", is signed " << (form.getIsSigned() ? "Yes" : "No") << ".";
	return out;
}

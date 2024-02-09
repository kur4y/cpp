/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 19:47:10 by tanota            #+#    #+#             */
/*   Updated: 2024/02/09 17:33:39 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	return;
}

Contact::~Contact()
{
	return;
}

void Contact::setFirstName(const std::string &firstName)
{
	_firstName = firstName;
}

void Contact::setLastName(const std::string &lastName)
{
	_lastName = lastName;
}

void Contact::setNickName(const std::string &nickname)
{
	_nickname = nickname;
}

void Contact::setPhoneNumber(const std::string &phoneNumber)
{
	_phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(const std::string &darkestSecret)
{
	_darkestSecret = darkestSecret;
}

std::string	Contact::getFirstName() const
{
	return _firstName;
}

std::string Contact::getLastName() const
{
	return _lastName;
}

std::string Contact::getNickname() const
{
	return _nickname;
}

std::string Contact::getPhoneNumber() const
{
	return _phoneNumber;
}

std::string Contact::getDarkestSecret() const
{
	return _darkestSecret;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 19:45:25 by tanota            #+#    #+#             */
/*   Updated: 2024/02/19 18:47:11 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _countContact(0)
{
	return;
}

PhoneBook::~PhoneBook()
{
	return;
}

void PhoneBook::addContact()
{
	int index =_countContact % 8;
	std::string input;
	
	std::cout <<"Enter New Contact's First Name: ";
	std::getline(std::cin, input);
	_book[index].setFirstName(input);
	
	std::cout<<"Enter New Contact's Last Name: ";
	std::getline(std::cin, input);
	_book[index].setLastName(input);

	std::cout<<"Enter New Contact's Nickname: ";
	std::getline(std::cin, input);
	_book[index].setNickName(input);

	std::cout<<"Enter New Contact's Phone Number: ";
	std::getline(std::cin, input);
	_book[index].setPhoneNumber(input);
	
	std::cout<<"Enter New Contact's Darkest Secret: ";
	std::getline(std::cin, input);
	_book[index].setDarkestSecret(input);	

	this->_countContact++;
}

void PhoneBook::printContact(int index) const
{
	std::cout << "Contact's First Name: " << _book[index].getFirstName() << std::endl;
	std::cout << "Contact's Second Name: " <<_book[index].getLastName() << std::endl;
	std::cout << "Contact's Nickname: " << _book[index].getNickname() << std::endl;
	std::cout << "Contact's Phone Number: " <<_book[index].getPhoneNumber() << std::endl;
	std::cout << "Contact's Darkest Secret: " << _book[index].getDarkestSecret() << std::endl;
}

std::string dotLine(const std::string &output)
{
	if (output.length() > 10)
		return output.substr(0, 9) + ".";
	return output;
}

void PhoneBook::searchContact() const
{
	if (_countContact == 0)
	{
		std::cout << "Your Awesome PhoneBook has no listings." << std::endl;
		return;
	}
	
	for (int i = 0; (i < 8); i++)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << dotLine(_book[i].getFirstName()) << "|";
		std::cout << std::setw(10) << dotLine(_book[i].getLastName()) << "|";
		std::cout << std::setw(10) << dotLine(_book[i].getNickname()) << "|" << std::endl;
	}
	
	int index;
	std::cout << "Enter Contact's index to display: ";
	
	if (std::cin >> index && index >= 0 && index < _countContact)
		printContact(index);
	else
	{
		std::cout << "Incorrect index" << std::endl;
		std::cin.clear();
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 19:46:30 by tanota            #+#    #+#             */
/*   Updated: 2024/02/09 17:33:07 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook _phoneBook;
	std::string cmd;
	
	while (true)
	{
		std::cout << "Type a command (ADD, SEARCH, EXIT):";
		std::getline(std::cin, cmd);
		
		if (cmd == "ADD")
			_phoneBook.addContact();
		else if (cmd == "SEARCH")
			_phoneBook.searchContact();
		else if (cmd == "EXIT")
			break;
	}
	return (0);
}
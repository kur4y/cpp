/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:03:02 by tanota            #+#    #+#             */
/*   Updated: 2024/02/20 17:21:43 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << &str << ": " << str << std::endl;
	std::cout << stringPTR << ": " << *stringPTR << std::endl;
	std::cout << &stringREF << ": " << stringREF << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:36:09 by tanota            #+#    #+#             */
/*   Updated: 2024/02/22 15:01:13 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;

	std::cout << "--- DEBUG ---" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "--- INFO ---" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;

	std::cout << "--- WARNING ---" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;

	std::cout << "--- ERROR ---" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;
	
	harl.complain("ABC");
	harl.complain("");
	harl.complain("123");

	return (0);
}

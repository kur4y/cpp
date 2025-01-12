/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 17:51:07 by tanota            #+#    #+#             */
/*   Updated: 2025/01/07 22:43:30 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "BitcoinExchange.hpp"

int main(int ac, char** av) 
{
	if (ac != 2)
	{
		std::cout << "Error: Missing argument.\nUsage: './btc input.txt'" << std::endl;
		return 1;
	}

	std::string inputFile = av[1];

	try
	{
		BitcoinExchange bitcoinExchange("data.csv");
		bitcoinExchange.processInputFile(inputFile);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}

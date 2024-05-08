/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 17:18:58 by tanota            #+#    #+#             */
/*   Updated: 2024/05/08 17:22:39 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <string>
# include <map>
# include <fstream>
# include <sstream>
# include <iostream>
# include <algorithm>
# include <float.h>

class BitcoinExchange
{
	private:
		std::map<std::string, float> _bitcoinPrices;

		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &other);

	public:
		BitcoinExchange(const std::string &databaseFile);
		~BitcoinExchange();

		bool isValidDate(std::string date);
		bool isValidPrice(std::string price);
		void processInputFile(const std::string &inputFile);
};

#endif

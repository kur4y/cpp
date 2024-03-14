/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:04:51 by tanota            #+#    #+#             */
/*   Updated: 2024/03/14 16:07:36 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Error! Please test with: ./scalarconvert {arg}" << std::endl;
		return (1);
	}
	ScalarConverter::convert(argv[1]);
	return (0);
}

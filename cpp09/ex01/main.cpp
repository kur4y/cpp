/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:44:43 by tanota            #+#    #+#             */
/*   Updated: 2025/01/07 22:44:02 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		RPN rpn;
		try
		{
			int result = rpn.evaluate(av[1]);
			std::cout << result << std::endl;
		}
		catch(std::exception& e)
		{
			std::cerr << "Error: " << e.what() << '\n';
}	
			}
	else
		std::cerr << "Usage: './RPN <expression>'\n";
	return 0;
}

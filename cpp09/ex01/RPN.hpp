/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:33:46 by tanota            #+#    #+#             */
/*   Updated: 2024/05/08 18:38:10 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RFN_HPP
# define RFN_HPP

# include <string>
# include <iostream>
# include <stack>
# include <sstream>
# include <cstdlib>

class RPN
{
	public:
		RPN();
		RPN(const RPN&);
		RPN &operator=(const RPN&);
		~RPN();
		
		int evaluate(const std::string &expression);
};

#endif

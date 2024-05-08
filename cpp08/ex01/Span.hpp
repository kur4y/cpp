/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:24:46 by tanota            #+#    #+#             */
/*   Updated: 2024/05/08 16:49:23 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <set>
# include <algorithm>
# include <climits>
# include <stdexcept>
# include <iostream>

class Span
{
	private:
		Span();
		unsigned int _maxSize;
		std::vector<int> _numbers;
	
	public:
		Span(unsigned int maxSize);
		Span(Span const &other);
		Span &operator=(Span const &other);
		~Span();

		void addNumber(int number);
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		
		int shortestSpan() const;
		int longestSpan() const;
};

std::ostream &operator<<(std::ostream &output, Span const &span);

#endif

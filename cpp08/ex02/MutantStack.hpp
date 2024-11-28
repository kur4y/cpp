/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:57:12 by tanota            #+#    #+#             */
/*   Updated: 2024/11/28 22:38:45 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() {};
		MutantStack(const MutantStack &other) : std::stack<T>(other) {};
		virtual ~MutantStack() {};
		MutantStack &operator=(const MutantStack &other)
		{
			std::stack<T>::operator=(other);
			return *this;
		}
		
		typedef typename std::deque<T>::iterator iterator;
		iterator begin() {return this->c.begin();};
		iterator end() {return this->c.end();};
		
		void	displayStack(void)
		{
			iterator it = this->begin();
			std::cout << "Mutantstack: [";
			while (true)
			{
				std::cout << *it;
				++it;
				if (it == this->end())
				{
					std::cout << "]" << std::endl;
					break;
				}
				std::cout << ", ";
			}
		}
};

#endif

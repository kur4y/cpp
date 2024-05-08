/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:07:42 by tanota            #+#    #+#             */
/*   Updated: 2024/05/08 19:18:36 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <vector>
# include <deque>
# include <iostream>
# include <ctime>
# include <cstdlib>
# include <algorithm>
# include <iomanip>

class PmergeMe
{
	private:
		std::vector<int> _intVec;
		std::vector<int> _intDeq;

		PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);

	public:
		PmergeMe(int ac, char **av);
		~PmergeMe();

		template<typename T> void mergeInsertionSort(T& arr);
		template<typename T> void merge(T& arr, T& L, T& R);

		void print(bool x);
};

#endif

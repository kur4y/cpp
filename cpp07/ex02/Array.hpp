/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:10:46 by tanota            #+#    #+#             */
/*   Updated: 2024/04/06 15:38:42 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stdexcept>
# include <iostream>

template <typename T>
class Array
{
	private:
		T *_array;
		unsigned int _size;
	
	public:
		Array(): _array(NULL), _size(0)
		{
		
		};
		
		Array(unsigned int n): _array(new T[n]()), _size(n)
		{
		
		};
		
		Array(const Array &other): _array(new T[other._size]), _size(other._size)
		{
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = other._array[i];
		};
		
		Array &operator=(const Array &other)
		{
			if (this != &other)
			{
				delete[] _array;
				_array = new T[other._size];
				_size = other._size;
				
				for (unsigned int i = 0; i < _size; i++)
					_array[i] = other._array[i];
			}
			return (*this);
		};
		
		~Array()
		{
			delete[] _array;
		};

		T &operator[](unsigned int index)
		{
			if (index >= _size)
				throw std::out_of_range("Array index is out of range");
			return (_array[index]);
		};

		T *getArray()
		{
			return (_array);
		};

		unsigned int size() const
		{
			return (_size);
		};
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:33:29 by plau              #+#    #+#             */
/*   Updated: 2023/07/26 16:19:45 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <cstddef>
#include <iostream>

template<typename T>
class Array
{
	public:
		/* Orthodox canonical form */
		Array() : _dynamicArray(NULL), _arraySize(0)
		{
		};
		~Array()
		{
			if (_dynamicArray)
				delete[] _dynamicArray;
		};
		/* copy constructor - deep copy */
		Array(const Array &src) :_dynamicArray(NULL), _arraySize(src._arraySize)
		{
			_dynamicArray = new T[_arraySize];
			for (int i = 0; i < _arraySize; i++)
				_dynamicArray[i] = src._dynamicArray[i];
		}
		/* copy assignment- deep copy */
		Array &operator=(const Array &src)
		{
			if (_dynamicArray)
				delete[] _dynamicArray;
			_arraySize = src._arraySize;
			_dynamicArray = new T[_arraySize];
			for (int i = 0; i < _arraySize; i++)
				_dynamicArray[i] = src._dynamicArray[i];
			return (*this);
		}
		
		/* Required by PDF */
		Array(unsigned int n) : _arraySize(n)
		{
			_dynamicArray = new T[n];
		};

		/* Member function */
		int size() const
		{
			return _arraySize;
		}
		
	private:
		T			*_dynamicArray; //pointer to dynamically allocated array
		size_t		_arraySize;
};

#endif

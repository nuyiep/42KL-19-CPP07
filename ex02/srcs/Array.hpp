/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:33:29 by plau              #+#    #+#             */
/*   Updated: 2023/07/28 15:34:58 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <cstddef>
#include <iostream>
#include "color.hpp"

template<typename T>
class Array
{
	public:
		/* Orthodox canonical form */
		//_dynamicArray(NULL) also can- empty array with no allocated memory and no elements
		//_dynamicArray(new T[0]) - allocate memory for no elements
		//						  - pointer is valid but dereferencing it will lead to
		//							undefined behaviour 
		Array() : _dynamicArray(NULL), _arraySize(0)
		// Array() : _dynamicArray(new T[0]), _arraySize(0)
		{
		};
		~Array()
		{
			if (_dynamicArray)
				delete[] _dynamicArray;
		};
		/* copy constructor - deep copy */
		Array(const Array &src) :_arraySize(src._arraySize)
		{
			_dynamicArray = new T[_arraySize]; //deep copy
			// _dynamicArray = src._dynamicArray; //shallow copy
			for (unsigned int i = 0; i < _arraySize; i++)
				_dynamicArray[i] = src._dynamicArray[i];
		}
		/* copy assignment- deep copy */
		Array &operator=(const Array &src)
		{
			if (_dynamicArray)
				delete[] _dynamicArray;
			_arraySize = src._arraySize;
			_dynamicArray = new T[_arraySize]; //deep copy
			// _dynamicArray = src._dynamicArray; //shallow copy
			for (unsigned int i = 0; i < _arraySize; i++)
				_dynamicArray[i] = src._dynamicArray[i];
				// _dynamicArray[i] = src[i]; 
				//because i have overloaded [] so using src[i] is ok- not really
			return (*this);
		}
		
		/* Required by PDF */
		Array(unsigned int n) : _arraySize(n)
		{
			_dynamicArray = new T[n];
		};
		
		T &operator[](unsigned int i)
		{
			if (i < 0 || i >= this->size())
				throw Array::IndexOutOfRangeException();
			return (this->_dynamicArray[i]);
		}
		unsigned int size() const
		{
			return (_arraySize);
		}
		
		/* Exception class */
		class IndexOutOfRangeException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Index out of range");
				}
		};
		
	private:
		T				*_dynamicArray; //pointer to dynamically allocated array
		unsigned int	_arraySize;
};

#endif

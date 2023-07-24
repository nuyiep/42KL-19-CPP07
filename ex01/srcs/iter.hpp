/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:43:42 by plau              #+#    #+#             */
/*   Updated: 2023/07/24 21:07:22 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void	iter(T *arrayA, int length, void(func)(T &ref, int length))
{
	// std::cout << arrayA[0] << std::endl;
	// std::cout << &arrayA << std::endl;
	// std::cout << *arrayA << std::endl;
	// std::cout << *arrayA[0] << std::endl;
	// std::cout << length << std::endl;
	if (arrayA == NULL || length <= 0 || func == NULL)
		return ;
	for (int i = 0; i < length; i++)
		func(arrayA[i], length);
}

template<typename T>
void	print(T arrayA, int length)
{
	std::cout << "arrayA: "<< arrayA << std::endl;
	std::cout << "*arrayA: " << arrayA << std::endl;
	std::cout << "sizeof(*arrayA): "<< sizeof(arrayA) << std::endl;
	std::cout << "sizeof(*arrayA[0]): "<< sizeof(arrayA[0]) << std::endl;

	// length = sizeof(arrayA) / sizeof(arrayA[0]);
	// length = sizeof(arrayA) / sizeof(arrayA[0]);
	
	/* Printing for testing */
	std::cout << "length: "<< length << std::endl;
}
#endif

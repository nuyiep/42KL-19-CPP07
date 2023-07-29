/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:43:42 by plau              #+#    #+#             */
/*   Updated: 2023/07/29 19:39:41 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include "color.hpp"
#include <vector>

template<typename T>
void	iter(T *arrayA, int length, void(func)(T &ref))
{
	if (arrayA == NULL || length <= 0 || func == NULL)
		return ;
	for (int i = 0; i < length; i++)
		func(arrayA[i]);
}

template< typename T >
void print( T const  x) 
{
	std::cout << x << std::endl;
	return; 
}

#endif

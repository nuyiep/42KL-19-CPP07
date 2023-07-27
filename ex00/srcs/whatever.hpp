/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:36:13 by plau              #+#    #+#             */
/*   Updated: 2023/07/27 14:48:26 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

#include <iostream>

template<typename T>
void	swap(T& a, T& b)
{
	T temp;

	temp = a;
	a = b;
	b = temp;
}

/* T& - the function returns a ref, not creating a copy
		any changes made will also affect the other
/*		allows you to modify the original values passed to the function */
/* T& a, T& b: These two indicate that the function parameters a and b
		 are references to objects of type T. By using references, 
		 the function can directly modify the original objects 
		 that are passed as arguments. 
		 This means that any changes made to a or b inside the 
		 function will affect the variables passed in the function call.

		By using references in this function, you ensure that any changes
		 made to the arguments inside the function are reflected in the 
		 calling code, and you avoid unnecessary copies of the objects. */
template<typename T>
T	&min(T &a, T &b)
{
	if (a > b)
		return (b);
	else if (a < b)
		return (a);
	else
		return (b);
}

template<typename T>
T	&max(T &a, T &b)
{
	if (a > b)
		return (a);
	else if (a < b)
		return (b);
	else
		return (b);
}

#endif

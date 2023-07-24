/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:36:13 by plau              #+#    #+#             */
/*   Updated: 2023/07/24 14:20:59 by plau             ###   ########.fr       */
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

template<typename T>
T	min(T a, T b)
{
	if (a > b)
		return (b);
	else if (a < b)
		return (a);
	else
		return (b);
}

template<typename T>
T	max(T a, T b)
{
	if (a > b)
		return (a);
	else if (a < b)
		return (b);
	else
		return (b);
}

#endif

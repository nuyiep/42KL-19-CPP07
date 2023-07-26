/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:33:19 by plau              #+#    #+#             */
/*   Updated: 2023/07/26 16:21:19 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<int> emptyArray;
	
	std::cout << "Empty array size: " << emptyArray.size() << std::endl;
	system("leaks - q array");
	return (0);	
}

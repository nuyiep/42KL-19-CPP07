/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:43:24 by plau              #+#    #+#             */
/*   Updated: 2023/07/24 21:07:02 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	/* Char array */
	std::cout << std::endl << "**********Testing for string Array**********" << std::endl; 
	std::string	stringArray[3] = {"Oppenheimer", "Christopher", "Nolan"};
	iter(&stringArray, 3, print);
	
	/* Int array */
	std::cout << std::endl << "**********Testing for int Array**********" << std::endl; 
	int arrayB[] = {1, 2, 3, 4};
	iter(&arrayB, 4, print);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:33:19 by plau              #+#    #+#             */
/*   Updated: 2023/07/27 12:59:04 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	{
		std::cout << BOLD_GREEN << "\n******* Default constructor test *******\n" << RESET << std::endl;
		Array<int>emptyArray;
		std::cout << "Empty array size: " << emptyArray.size() << std::endl;
		
		std::cout << BOLD_GREEN << "\n******* Int constructor test *******\n" << RESET << std::endl;
		Array<int> threeElementArray(3);
		int j = 10;
		for (unsigned int i = 0; i < threeElementArray.size(); i++)
			threeElementArray[i] = j + 10;
		std::cout << "Three element array size: " << threeElementArray.size() << std::endl;

		std::cout << BOLD_GREEN << "\n******* [] operator test *******\n" << RESET << std::endl;
		std::cout << "threeElementArray[2]: " << threeElementArray[1] << std::endl;
		
		std::cout << BOLD_GREEN << "\n******* Index out of range test *******\n" << RESET << std::endl;
		try
		{
			std::cout << "threeElementArray[10]: " << threeElementArray[10] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
	return (0);	
}

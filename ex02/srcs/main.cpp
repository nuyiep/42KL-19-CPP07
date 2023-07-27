/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:33:19 by plau              #+#    #+#             */
/*   Updated: 2023/07/27 21:34:39 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	int * a = new int();
	std::cout << *a << std::endl;
	std::cout << BOLD_GREEN << "\n******* Default constructor test *******\n" << RESET << std::endl;
	Array<int>emptyArray;
	std::cout << "Empty array size: " << emptyArray.size() << std::endl;
	
	std::cout << BOLD_GREEN << "\n******* Int constructor test *******\n" << RESET << std::endl;
	Array<int> threeElementArray(3);
	int j = 10;
	for (unsigned int i = 0; i < threeElementArray.size(); i++)
	{
		threeElementArray[i] = j; //comment this to test empty array
		j = j + 10;
	}
	std::cout << "Three element array size: " << threeElementArray.size() << std::endl;

	std::cout << BOLD_GREEN << "\n******* copy constructor test (deep copy) *******\n" << RESET << std::endl;
	std::cout << "threeElementArray[0]: " << threeElementArray[0] << std::endl;
	std::cout << "threeElementArray[1]: " << threeElementArray[1] << std::endl;
	std::cout << "threeElementArray[2]: " << threeElementArray[2] << std::endl;
	Array <int> copyOfThreeElementArray(3);
	copyOfThreeElementArray = threeElementArray;
	std::cout << "copyOfThreeElementArray[0]: " << copyOfThreeElementArray[0] << std::endl;
	std::cout << "copyOfThreeElementArray[1]: " << copyOfThreeElementArray[1] << std::endl;
	std::cout << "copyOfThreeElementArray[2]: " << copyOfThreeElementArray[2] << std::endl;
	for (unsigned int i = 0; i < threeElementArray.size(); i++)
	{
		threeElementArray[i] = j;
		j = j + 10;
	}
	for (unsigned int i = 0; i < threeElementArray.size(); i++) 
		std::cout << "threeElementArray" << "[" << i << "]:" << threeElementArray[i] << std::endl;
	for (unsigned int i = 0; i < copyOfThreeElementArray.size(); i++)
		std::cout << "copyOfThreeElementArray" << "[" << i << "]:" << copyOfThreeElementArray[i] << std::endl;
	
	std::cout << BOLD_GREEN << "\n******* copy constructor test (deep copy) *******\n" << RESET << std::endl;
	Array <std::string>fiveElementArray(5);// = {"Christopher", "Nolan", "is", "a", "director"};
	fiveElementArray[0] = "Christopher";
	fiveElementArray[1] = "Nolan";
	fiveElementArray[2] = "is";
	fiveElementArray[3] = "a";
	fiveElementArray[4] = "director";
	for (unsigned int i = 0; i < fiveElementArray.size(); i++) 
		std::cout << "fiveElementArray" << "[" << i << "]:" << fiveElementArray[i] << std::endl;
	
	Array <std::string>copyConstructor(fiveElementArray);
	for (unsigned int i = 0; i < copyConstructor.size(); i++) 
		std::cout << "copyConstructor" << "[" << i << "]:" << copyConstructor[i] << std::endl;
	fiveElementArray[0] = "Pei Yun";
	std::cout << "copyConstructor[0]" << copyConstructor[0] << std::endl;
	

	std::cout << BOLD_GREEN << "\n******* [] operator test *******\n" << RESET << std::endl;
	std::cout << "threeElementArray[2]: " << threeElementArray[1] << std::endl;
	
	std::cout << BOLD_RED << "\n******* Index out of range test *******\n" << RESET << std::endl;
	try
	{
		std::cout << "threeElementArray[10]: " << threeElementArray[10] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);	
}

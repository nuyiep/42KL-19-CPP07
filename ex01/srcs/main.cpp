/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:43:24 by plau              #+#    #+#             */
/*   Updated: 2023/07/29 19:33:43 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) 
		{ 
			return;
		}
		int getMilkTea( void ) const 
		{ 
			return (this->_n); 
		}
	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & chill ) 
{
	o << chill.getMilkTea();
	return o;
}

int main() 
{
	{
		/* String array */
		std::cout << BOLD_GREEN << std::endl << "********** String Array Test **********" << RESET << std::endl; 
		std::string	stringArray[3] = {"Oppenheimer", "Christopher", "Nolan"};
		int x = -1;
		x = sizeof(stringArray) / sizeof(stringArray[0]);
		std::cout << BOLD_GREEN <<  "Number of elements in stringArray: " << RESET << x << std::endl;
		iter(stringArray, x, print);
		
		/* Int array */
		std::cout << BOLD_GREEN << std::endl << "********** Int Array Test **********" << RESET << std::endl; 
		int arrayB[] = {1, 2, 3, 4};
		int y = -1;
		y = sizeof(arrayB) / sizeof(arrayB[0]);
		std::cout << BOLD_GREEN <<  "Number of elements in arrayB: " << RESET << y << std::endl;
		iter(arrayB, y, print);

		/* Double array */
		std::cout << BOLD_GREEN << std::endl << "********** Double Array Test **********" << RESET << std::endl; 
		double arrayC[] = {1.1, 2.22, 3.333, 4.4444};
		int p = -1;
		p = sizeof(arrayC) / sizeof(arrayC[0]);
		std::cout << BOLD_GREEN <<  "Number of elements in arrayC: " << RESET << p << std::endl;
		iter(arrayC, p, print);

		/* Char* array */
		std::cout << BOLD_GREEN << std::endl << "********** Char* Array Test **********" << RESET << std::endl; 
		char arrayD[] = "YO";
		int z = -1;
		z = strlen(arrayD);
		std::cout << BOLD_GREEN << "Number of elements in arrayD: " << z << RESET << std::endl;
		iter(arrayD, z, print);
	}
	{
		std::cout << BOLD_GREEN << std::endl << "********** Eval Test **********" << RESET << std::endl; 	
		int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
		Awesome tab2[5];
		iter( tab, 5, print );
		iter( tab2, 5, print );
		return 0;
	}
}

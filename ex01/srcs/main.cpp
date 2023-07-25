/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:43:24 by plau              #+#    #+#             */
/*   Updated: 2023/07/25 15:11:24 by plau             ###   ########.fr       */
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
		std::cout << std::endl << "********** String Array Test **********" << std::endl; 
		std::string	stringArray[3] = {"Oppenheimer", "Christopher", "Nolan"};
		iter(stringArray, 3, print);
		
		/* Int array */
		std::cout << std::endl << "********** Int Array Test **********" << std::endl; 
		int arrayB[] = {1, 2, 3, 4};
		iter(arrayB, 4, print);

		/* Double array */
		std::cout << std::endl << "********** Double Array Test **********" << std::endl; 
		double arrayC[] = {1.1, 2.22, 3.333, 4.4444};
		iter(arrayC, 4, print);

		/* Char* array */
		std::cout << std::endl << "********** Char* Array Test **********" << std::endl; 
		char arrayD[] = "YO";
		iter(arrayD, 2, print);
	}
	{
		std::cout << std::endl << "********** Eval Test **********" << std::endl; 	
		int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
		Awesome tab2[5];
		iter( tab, 5, print );
		iter( tab2, 5, print );
		return 0;
	}
}

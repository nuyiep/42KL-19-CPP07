/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plau <plau@student.42.kl>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:35:48 by plau              #+#    #+#             */
/*   Updated: 2023/07/24 14:39:55 by plau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

/* ::swap */
/* "::" - scope resolution operator to call the swap function */
/* to specify that you want to use your custom swap function */
/* rather than any other possible swap function defined in other */
/* libraries or the standard namespace */
/* important in cases you are working with types that have their own */
/* swap functions defined */
int main()
{
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	{
		int a = 90;
		int b = 100;
		float c = 88.88;
		float d = 77.777;
		int equal = 90.00;
		std::string original = "Original";
		std::string change = "Change";

		std::cout << std::endl << "*********** Swap (Int, float and string) ***********" << std::endl;
		swap<int>(a, b);
		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;
		swap(a, b);
		swap(c, d);
		std::cout << "c: " << c << std::endl;
		std::cout << "d: " << d << std::endl;
		swap(c, d);
		swap(original, change);
		std::cout << "original: " << original << std::endl;
		std::cout << "change: " << change << std::endl;
		
		std::cout << std::endl << "*********** Min (Int and float) ***********" << std::endl;
		std::cout << "min(a, b): " << min(a, b) << std::endl;
		std::cout << "min(c, d): " << min(c, d) << std::endl;
		std::cout << "min(a, equal): " << min(a, equal) << std::endl;
		
		std::cout << std::endl << "*********** Max (Int and float) ***********" << std::endl;
		std::cout << "max(a, b): " << max(a, b) << std::endl;
		std::cout << "max(c, d): " << max(c, d) << std::endl;
		std::cout << "max(a, equal): " << max(a, equal) << std::endl;

		/* Different data types cannot compile */
		// std::cout << "min(a, c): " << min(a, c) << std::endl;
	}
	return (0);
}

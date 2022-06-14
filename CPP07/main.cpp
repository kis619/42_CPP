/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:28:48 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/14 17:00:15 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "templates.hpp"
#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
	T temp;
	
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T &min(T &a, T &b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T &max(T &a, T &b)
{
	if (a > b)
		return (a);
	return (b);
}

int main(void)
{
	// int a = 5;
	// int b = 10;
	
	// std::cout << "swap___________" << std::endl;
	// std::cout << "a = " << a << std::endl << "b = " << b << std::endl; 

	// swap(a, b);
	// std::cout << "a = " << a << std::endl << "b = " << b << std::endl; 
	
	// std::cout << "min____________" << std::endl;
	// std::cout << min(a, b) << std::endl; 
	// a = 5;
	// std::cout << min(a, b) << std::endl; 
	// std::cout << &min(a, b) << std::endl; 
	// std::cout << &b << std::endl; 
	// a = 10;
	
	// std::cout << "max____________" << std::endl;
	// std::cout << max(a, b) << std::endl; 
	// a = 5;
	// std::cout << max(a, b) << std::endl; 
	// std::cout << &max(a, b) << std::endl; 
	// std::cout << &b << std::endl;
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
	return (0);
}
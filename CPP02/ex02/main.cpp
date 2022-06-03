/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 09:06:24 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/03 15:16:21 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main2(void)
{
	Fixed  a(10);
	Fixed b(a);
	Fixed  c(20);
	Fixed const d(b);
	Fixed const e(33);
	std::string sep =  "____________________________________________\n";
	
	//Comparison operators
	std::cout << sep;
	std::cout << "a == b: " << (a == b) << std::endl;
	std::cout << "b == c: " << (b == c) << std::endl;
	std::cout << "b > c: " << (b > c) << std::endl;
	std::cout << "c > b: " << (c > b) << std::endl;
	std::cout << "b < c: " << (b < c) << std::endl;
	std::cout << "c < b: " << (c < b) << std::endl;
	std::cout << "b >= c: " << (b >= c) << std::endl;
	std::cout << "c >= b: " << (c >= b) << std::endl;
	std::cout << "a >= b: " << (a >= b) << std::endl;
	std::cout << "b <= c: " << (b <= c) << std::endl;
	std::cout << "c <= b: " << (c <= b) << std::endl;
	std::cout << "a <= b: " << (a <= b) << std::endl;
	std::cout << "a != b: " << (a != b) << std::endl;
	std::cout << "b != c: " << (b != c) << std::endl;
	std::cout << sep;
	//Arithmetic operators
	std::cout << "b + c: " << (b + c) << std::endl;
	std::cout << "b - c: " << (b - c) << std::endl;
	std::cout << "b * c: " << (b * c) << std::endl;
	std::cout << "b / c: " << (b / c) << std::endl;
	std::cout << sep;

	//Increment/Decrement operators
	std::cout << "a: " << a << std::endl;
	std::cout << "a++ initial: " << a++ << std::endl;
	std::cout << "a++ result: " << a << std::endl;
	std::cout << "a-- initial: " << a-- << std::endl;
	std::cout << "a-- result: " << a << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "--a result: " << --a << std::endl;
	std::cout << sep;

	//MinMax
	std::cout << Fixed::min(a, b) << std::endl;
	a++;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "e: " << e << std::endl;
	std::cout << Fixed::min(d, e) << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "e: " << e << std::endl;
	std::cout << Fixed::max(d, e) << std::endl;
	
	return(69);
}

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << "_____________________________\n";
	std::cout << "MY TESTS" << std::endl;
	main2();
	return 0;
}
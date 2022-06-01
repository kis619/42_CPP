/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 09:06:24 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/01 15:33:36 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed const a(10);
	Fixed const b(a);
	Fixed const c(20);
	
	//Comparison operators
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

	//Arithmetic operators
	operator==(b, c);
}
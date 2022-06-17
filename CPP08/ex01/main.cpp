/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 08:54:35 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/17 11:20:55 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

# include <vector>
# include <iostream>

int main(void)
{
	Span s(7);
	
	///////////////////ONE
	try
	{
		for (int i = 0; i < 9; i++)
		{
			s.addNumber(i + 1);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << COLOR_RED << "Exception caught: " << e.what() << COLOR_DEFAULT << std::endl;
	}

	std::cout << "HEy" << std::endl;
	std::cout << s.shortestSpan() << std::endl;
	std::cout << s.longestSpan() << std::endl;
	
	///////////////////TWO
	Span s2(0);
	try
	{
		std::cout << s2.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << COLOR_RED << "Exception caught: " << e.what() << COLOR_DEFAULT << std::endl;
	}
	
	try
	{
		std::cout << s2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << COLOR_RED << "Exception caught: " << e.what() << COLOR_DEFAULT << std::endl;
	}
	
	///////////////////THREE
	
	Span s3(12);
	std::vector<int> nums;

	for (int i = 0; i < 3; i++)
	{
		nums.push_back(i + 1);
		s3.addNumber(i + 10);
	}
	s3.addMultipleNUmbers(nums.begin(), nums.end());
	for(int i = 0; i < s3.getSpan().size(); i++)
		std::cout << s3.getSpan().at(i) << " ";
	
	std::cout << std::endl;
	
	
}
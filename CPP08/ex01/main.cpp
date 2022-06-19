/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 08:54:35 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/19 13:35:59 by kmilchev         ###   ########.fr       */
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

	std::cout << "Shortest Span: " << s.shortestSpan() << std::endl;
	std::cout << "Longestest Span: " << s.longestSpan() << std::endl;
	
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
	
	std::cout << COLOR_GREEN << "Before change: " << COLOR_DEFAULT << std::endl;
	for(unsigned int i = 0; i < s3.getSpan().size(); i++)
		std::cout << s3.getSpan().at(i) << " ";
	std::cout << std::endl;
		
	s3.addMultipleNUmbers(nums.begin(), nums.end());
	std::cout << COLOR_GREEN << "After change: " << COLOR_DEFAULT << std::endl;
	for(unsigned int i = 0; i < s3.getSpan().size(); i++)
		std::cout << s3.getSpan().at(i) << " ";
	
	std::cout << std::endl;

	///////////////////FOUR
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}
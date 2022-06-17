/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 08:16:38 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/17 08:30:09 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main(void)
{
	std::vector<int> 	arr(10);
	for(int i = 0; i < 10; i++)
		arr[i] = i + 1;
		
	for(int i = 0; i < 10; i++)
		std::cout << arr[i] << " ";

	
	std::vector<int>::iterator iter = easyfind(arr, 6);
	std::cout << std::endl << COLOR_GREEN << *iter << std::endl;

	try
	{
		std::vector<int>::iterator iter = easyfind(arr, 619);
	}
	catch(const std::exception& e)
	{
		std::cerr <<  COLOR_RED << e.what() << '\n';
	}
	
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:13:34 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/14 20:28:23 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T>
void add(T &num)
{
	num++;
}

int main(void)
{
	std::string sep = "____________________________";
	int arr[7] = {0, 1, 2, 3, 4, 5, 6};
	float arr1[7] = {0, 1, 2, 3, 4, 5, 6};
	double arr2[7] = {0, 1, 2, 3, 4, 5, 6};
	char arr3[7] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};

	iter(arr, 7, add);
	for(int i = 0; i < 7; i++)
		std::cout << arr[i] << std::endl;
		
	std::cout << sep << std::endl;
	
	iter(arr1, 7, add);
	for(int i = 0; i < 7; i++)
		std::cout << std::fixed << arr1[i] << std::endl;
	
	std::cout << sep << std::endl;
	
	iter(arr2, 7, add);
	for(int i = 0; i < 7; i++)
		std::cout << std::fixed << arr2[i] << std::endl;
	
	std::cout << sep << std::endl;
	
	iter(arr3, 7, add);
	for(int i = 0; i < 7; i++)
		std::cout << std::fixed << arr3[i] << std::endl;
	
	std::cout << sep << std::endl;
}	
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 20:45:39 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/15 17:08:59 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main(void)
{

	Array<int> A = Array<int>(7);
	Array<int> B;
	A[1] = 2;
	for(int i = 0; i < 7; i++)
		A[i] = i + 1;
	std::cout << A.size() << std::endl;
	std::cout << "__________________________________________-" << std::endl;
	for(int i = 0; i < 200; i++)
		std::cout << A[i] << std::endl;
	

	// int arr[7];
	// for(int i = 0; i < 12; i++)
	// 	std::cout << arr[i] << std::endl;
	// B = A;
	// B[6] = 999;
	// for(int i = 0; i < 7; i++)
	// 	std::cout << B[i]<< std::endl;
	
}
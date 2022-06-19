/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:20:28 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/19 13:42:19 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <iostream>
#include "MutantStack.hpp"

int main(void)
{
	MutantStack<int> k;
	std::stack<int> j;
	std::cout << "My stack size: " << k.size() << std::endl;
	std::cout << "Stack stack size: " << j.size() << std::endl;
	k.push(19);
	k.push(8);
	k.push(9);
	k.push(10);
	k.push(32);
	k.push(99);
	std::cout << "My stack size after adding elements: ";
	std::cout << k.size() << std::endl;	
	std::cout << "First element: ";
	std::cout << *(k.begin()) << std::endl;
	std::cout << "Last element: ";
	std::cout << *(k.end() - 1)<< std::endl;
	
	return (0);
}
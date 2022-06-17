/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:20:28 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/17 15:36:07 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <iostream>
#include "MutantStack.hpp"

int main(void)
{
	MutantStack<int> k;
	std::stack<int> j;
	std::cout << j.size() << std::endl;
	std::cout << k.size() << std::endl;
	k.push(6);
	k.push(8);
	k.push(9);
	k.push(10);
	k.push(32);
	k.push(-1);
	std::cout << k.size() << std::endl;	
	std::cout << *(k.begin()) << std::endl;
	
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 19:45:23 by kmilchev          #+#    #+#             */
/*   Updated: 2022/05/29 02:57:31 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string text = "HI THIS IS BRAIN";
	std::string *stringPTR = &text;
	std::string &stringREF = text;
	
	std::cout << "The memory address of the string variable: " << stringPTR << std::endl; 
	std::cout << "The memory address of the string variable: " << &text << std::endl; 
	std::cout << "The memory address held by stringPTR: " << &stringPTR << std::endl; 
	std::cout << "The memory address held by stringREF: " << &stringREF << std::endl; 
	
	std::cout << "_________________________________________" << std::endl;
	
	std::cout << "The value of the string variable: " << text << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
}
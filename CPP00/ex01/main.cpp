/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:31:40 by kmilchev          #+#    #+#             */
/*   Updated: 2022/05/03 23:30:35 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main ()
{
	std::string	word;
	PhoneBook	phoneBook;
	
	while(true)
	{
		std::cout << "Please enter a command:" << std::endl;
		std::getline(std::cin, word);
		
		if (word.compare("ADD") == 0)
			phoneBook.add();
		else if (word.compare("SEARCH") == 0)
			phoneBook.search();
		else if (word.compare("EXIT") == 0)
			break ;
	}
	std::cout << "Number of contacts added: " << phoneBook.get_nContacts() << std::endl;
	return (0);
}
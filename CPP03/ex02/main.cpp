/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 16:14:22 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/03 22:51:31 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::string sep = "___________________________________________\n";
	std::cout << sep;
	
	FragTrap henry;
	henry.display();
	
	std::cout << sep;
	
	FragTrap harriet("Harriet");
	harriet.display();
	harriet.highFiveGuys();
	std::cout << sep;

	ClapTrap marrion("Bartoli");
	FragTrap marriet(harriet);
	marriet.display();
	marriet.attack("Marriet");
	marrion.attack("Marriet");
	std::cout << sep;
}
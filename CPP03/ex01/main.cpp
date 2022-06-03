/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 16:14:22 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/03 21:53:26 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::string sep = "___________________________________________\n";
	std::cout << sep;
	
	ScavTrap henry;
	henry.display();
	
	std::cout << sep;
	
	ScavTrap harriet("Harriet");
	harriet.display();
	harriet.guardGate();
	std::cout << sep;

	ClapTrap marrion("Bartoli");
	ScavTrap marriet(harriet);
	marriet.display();
	marriet.attack("Marriet");
	marrion.attack("Marriet");
	std::cout << sep;
}
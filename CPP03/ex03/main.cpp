/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 16:14:22 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/04 16:07:59 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
int main()
{
	std::string sep = "___________________________________________\n";
	std::cout << sep;
	
	FragTrap fraggy("Fragrison");
	fraggy.display();
	std::cout << sep;
	
	ScavTrap scaggy("Scavrison");
	scaggy.display();
	std::cout << sep;
	
	DiamondTrap hey;
	hey.display();
	std::cout << sep;
	
	DiamondTrap consuela("Consuela");
	consuela.display();
	consuela.attack("Stefan");
	consuela.whoAmI();
	std::cout << sep;
	
	
}
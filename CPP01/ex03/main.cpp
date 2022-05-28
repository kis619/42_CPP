/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 22:20:49 by kmilchev          #+#    #+#             */
/*   Updated: 2022/05/29 00:27:03 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int my_tests(void)
{
	//Creating a weapon with no type, then changing the type
	Weapon weapon = Weapon("");
	std::cout << "Default weapon: " << weapon.getType() << std::endl;
	weapon.setType("Riffle");
	std::cout << "New weapon: " << weapon.getType() << std::endl;
	
	//Creating a HumanA with a weapon and attacking
	HumanA john("John", weapon);
	john.attack();
	
	//Creating a HumanB with no weapon, attacking, changing the weapon from above
	//adding it, attacking
	HumanB marieta("Marry");
	marieta.attack();
	weapon.setType("Knife");
	marieta.setWeapon(weapon);
	marieta.attack();
	return (0);
}

int main()
{
	my_tests();
	
	{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	}
	
	{
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	}
	return 0;
}

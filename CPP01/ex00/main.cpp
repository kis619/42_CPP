/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 17:41:55 by kmilchev          #+#    #+#             */
/*   Updated: 2022/05/28 18:14:04 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	Zombie zombi0;
	Zombie zombi1("Maria");
	Zombie zombi2("");
	Zombie *allocatedZombie = newZombie("Bambina");
	std::string sep;
	
	sep = "__________________________________________\n";
	
	std::cout << sep <<"Done with constructors.\n" << sep;
	
	zombi0.announce();
	zombi1.announce();
	zombi2.announce();
	allocatedZombie->announce();
	
	std::cout << sep <<"Done talking.\n" << sep;
	
	randomChump("Pablito");
	std::cout << sep <<"Random Chump Done.\nDestructors follow.\n" << sep;
	

	delete allocatedZombie;
}